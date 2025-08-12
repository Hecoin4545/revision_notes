const express = require('express');
const app = express();
const fs = require('fs');
const users = require('./MOCK_DATA.json')
const port= 8000;

app.use(express.urlencoded({extended:false}))
app.get("/api/users" , (req,res)=>{
    return res.json(users)
})

app.get("/users" , (req,res)=>{
    const html = `
    <ul>
    ${users.map((user)=> `<li> ${user.first_name}</li>`).join("")}
    </ul>
    `
    return res.send(html)
})

app.post('/api/users' , (req,res)=>{
    const body = req.body;
    users.push({...body , id:users.length+1})
    fs.writeFile('./MOCK_DATA.json' , JSON.stringify(users) , (err , data)=>{
        return res.json({status:"done"})
    })
})

app.route('/api/users/:id').get((req,res)=>{
    const id = Number(req.params.id);
    const user = users.find((user) => user.id === id);
    return res.json(user);
}).delete((req,res)=>{
    const id = req.params.id;
    const user = users.filter((user)=> user.id != id);
    fs.writeFile('./MOCK_DATA.json' , JSON.stringify(user) , (err , data)=>{
        return res.json({status:"successfully removed"})
    })
}).patch((req,res)=>{
    const id = req.params.id;
    const body = req.body;
    const Eduser= users.map((user)=>
      user.id == id
        ? {
            ...user,
            first_name: body.first_name,
            last_name: body.last_name,
            email: body.email,
            job_title: body.job_title,
          }
        : user
    )
    fs.writeFile('./MOCK_DATA.json' , JSON.stringify(Eduser) , (err , data)=>{
        return res.json({status:"successfully update"})
    })

})

app.listen(port , (req,res)=>{
    console.log(`Server Has been connected successfully on port :- ${port}`);
})