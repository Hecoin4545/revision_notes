// What is module ??
// It means splitting your code into different files...



// To connect different files we can use require 
// const math = require("./package_json")


// here agar koi function ko use karna ho than we can also desture it as well 
// const {addfn , subFc} = require('./package_json')


// now lets say agar math file mai add name se koi function hai and vo hume iss file mai use karna hai than what we can do is math wali file mai export karenge as shown below 
// module.exports = {
//     addfn:add,
//     subFc:sub
// };


// inside this file we can use it like this 
// console.log(Math.addFn(2,3));




// file handling in node js 
const fs = require('fs');


// There are two type of file handling we can do one is syncronous and other is asyncronous in syncronous it will return ua a value where as in asyncronous it will return us a function which will give us two parameter one is err and other is response 

// write a file (will overwrite it )

// sync 
// const writingSync = fs.writeFileSync('./filename.txt' , "write the message you want to delevir")

// async 
// const writingasync = fs.writeFile('./filename.txt' , 'write the message you want to delevir' , (err , res)=>{
//     if(err){
//         console.log(err);
//     }else{
//         console.log(res);
//     }
// })


// read a file 

// sync 
// const readingSync = fs.readFileSync('./filename.txt' , 'utf-8)

// async 
// const readingasync = fs.readFile('./filename.txt' ,'utf-8', (err , res)=>{
//     if(err){
//         console.log(err);
//     }else{
//         console.log(res);
//     }
// })


// append a file 

// sync 
// const appendingSync = fs.appendFileSync('./filename.txt', "write the message you want to delevir")

// async 
// const appendingasync = fs.appendFile('./filename.txt' , "write the message you want to delevir", (err , res)=>{
//     if(err){
//         console.log(err);
//     }else{
//         console.log(res);
//     }
// })


// copying a file 

// sync 
// const copyingsync = fs.cpsync('./filename.txt', "./copyfilename.txt")

// async 
// const copyingasync = fs.cp('./filename.txt' , "./copyfilename.txt", (err , res)=>{
//     if(err){
//         console.log(err);
//     }else{
//         console.log(res);
//     }
// })


// deleting a file 
// sync 
// const copyingsync = fs.unlinkSync('./filename.txt')

// async 
// const copyingasync = fs.unlink('./filename.txt' , (err , res)=>{
//     if(err){
//         console.log(err);
//     }else{
//         console.log(res);
//     }
// })


// want to get some stats 
// console.log(fs.statSync('test.txt'));



// How to create http server from basic :-

// Agar hume basic se server ko start karna ho toh kese kareenge 

const http = require('http');

const myServer = http.createServer((req , res)=>{
    
    // It basically give us the extra information about a particular user 
    console.log(req.headers);
    
    console.log("new req rec.");

    // This is how we can create a log file 
    // agar samaj lo hume age aur bhi path banane honge toh ase hi banaege so ye boot messi code lagege so iski jaga we will be using express 
    fs.appendFile("log.txt" , `${Date.now()} is at ${req.url}` , (err , data)=>{
        switch(req.url){
            case '/':
                // ab idhar bhi hume if else statement lagani padegi like agar get request ho toh ye karo , post ho toh ye etc etc 
                // so its better to use express instead of these 
                res.end("homepage");
                break;
            case '/contact':
                res.end("contact Page")
        }
    })
    res.send("hello from server")
})

// ab isko listen bhi karvana padega 

myServer.listen(8000 , ()=>{
    console.log("server connected successfully ");
})



// All about url in node js 

// https://www.piyushgarg.dev/homepage?q=good+way&gg=cricket

// https :- hypertext transfer protocol secure 
// www.piyushgarg.dev:- domain of my webpage 
// homepage:- this is the path i am getting directed to 
// ?q=good+way&gg=cricket  this is the query that is additionally getting passed to the server by the client 



// ab samaj lo hume ye information chahiye jo client send kar raha hai toh phir hume ek external package use karna padega 

const url = require('url');

// idhar true ki baje se hume query parameter bhi milenge in the form of objects 
// const myurl = url.parse(req.url , true)

// ab humne jaha pe bhi myurl.pathname like hume vo path name de dega like \home etc

// humne jaha pe bhi myurl.query likha it will give us 
// {"q":"good way" , "gg":"cricket"}




// https method 

// Get :- Agar hum koi server pe jane ki request karte hai and server hume respond karta hai toh hum ye use karenge 
// post :- agar hum kuch server kp bhej rahe ho like signup kar rahe ho than we can use this 
// put :- it is used when we want to replace the entire resource with a new version , it can be thought as update and replace 
// patch :- it updates only the sepcified fields , leaving others unchanges  , can be thought as update and merge 
// delete :- it is used to delete something from the database 


// how to set up a server using express 

const express = require('express')

const app = express()

// agar kisine is path pe call kiya toh ye run hoga 

// ab idhar hume url wali library ki bhi zarurat nhi because now that can also be done with app by app.path
app.get('/' , (req,res)=>{
    return res.send("hello from server")
})

app.listen(8000 , ()=>{
    console.log('server started successfully ');
    
})

// the above is the simplest way through which we can serve a server 



// version 

// ^4.18.2

// 1st part :- 4 --> jab bohot hi koi major changes ho like get ki jaga express mai GET introduce ho jaye tab ye cahnge hota hai so hume ye on 
// going project mai toh kabhi bhi chagne nhi karna chahiye and agar karna bhi hai toh fir dhyan se dhek lo kya kya change huve hai than karo 

// 2nd part :- 18 --> jab koi chota se but script mai change ho like ek naya path introduce huva ho but still isko bhi dhek ke karneka 


// 3rd part :- 2 --> very very minor changes like kabhi koi sentace , color vo sab change kiya ho tab hota hai and isko change kar sakte hai hum 

// ^ --> is used ki jo 4 hai na usko toh 4 hi rakhna baki 18 ya 2 mai koi chanegs aye toh kar dena usko 

// ~ --> is used ki jo 4 and 18 hai na usko change mat karo but agar 2 mai koi cahnges ho toh kar sakte hai 

// latest  --> jo bhi latesh version ho na vo update kar do 

// 4.18.x --> jaha bhi x hai usko change karo baki rahne do 




// its a best practice to have a hybrid server like agar koi route hai /users jaha html document render ho rahi hai toh waha pe hi ek aur route 
// bana sakte hai /api/users jo json data render karega so when we are building mobile app hum use kar payenge 


// kahi pe bhi /users/:id likha ho that means :id is a variable thing which can change 


// This is how we can render html in a web page 
app.get('/users' , (req,res)=>{
    const html = `
    <ul> 
    ${users.map((user)=> `<li> ${user.first_name}</li>`).join("")}
    </ul>
    `
    return res.send(html);
})


// lets say if we are directing to the same path with different request that what we can do is 

app.route('./users').get((req,res)=>{
    return res.json(users)
}).delete((req,res)=>{
    return res.json(users)
})




// CRUD operation using node js 

// Basic require 
// const express = require('express');
// const app = express();
// const fs = require('fs');
// const users = require('./MOCK_DATA.json')
// const port= 8000;


// This is a sort of middleware jo hume post karne mai help karta hai 
app.use(express.urlencoded({extended:false}))

// basic jason response dene keliye 
app.get("/api/users" , (req,res)=>{
    return res.json(users)
})

// is tarike se hum basic html upload kar sakte hai web page pe 
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
    // Phele hum data ko push karvayenge but vo permanently show nhi hoga to show permanently hume usko write bhi karna padega varna refresh hote 
    // hi gayab ho jayega data 
    users.push({...body , id:users.length+1})
    fs.writeFile('./MOCK_DATA.json' , JSON.stringify(users) , (err , data)=>{
        return res.json({status:"done"})
    })
})

// this is how we can delete  , get and update things 
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
