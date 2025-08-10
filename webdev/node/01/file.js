const fs = require('fs')

// fs.writeFileSync('./test.txt' , "hey there")

// fs.writeFile('./test.txt' , "hello world async" , (e)=>{}) 


// const re = fs.readFileSync("./contacts.txt" , "utf-8")
// console.log(re);

// fs.readFile("./contacts.txt" , "utf-8" , (err , res)=>{
//     if(err){
//         console.log("error");
//     }else{
//         console.log(res);   
//     }
// })


// fs.appendFileSync('./test.txt' , new Date().getDate().toLocaleString());


// fs.cpSync("./test.txt" , './copy.txt')


// fs.unlinkSync('./copy.txt')


// console.log(fs.statSync('test.txt'));


const os = require('os');

console.log(os.cpus().length);

