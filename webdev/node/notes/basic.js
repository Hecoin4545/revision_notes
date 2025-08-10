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




