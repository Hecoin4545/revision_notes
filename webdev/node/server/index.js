const http =require('http');
const fs = require('fs')

const myServer = http.createServer((req , res)=>{
    const log = `${Date.now()}\n`
    const gg = fs.appendFileSync('log.txt' ,log )
    console.log(gg , "h1");
    
    console.log('h2');
    
    res.end('hello from server')
});

myServer.listen(8000 , ()=>{
    console.log("Server started");
})
