const http =require('http');
const fs = require('fs')
const url = require('url');

const myServer = http.createServer((req , res)=>{
    if(req.url ==="/favicon.ico") return;
    const log = `${Date.now()} : ${req.url} \n`
    const myurl = url.parse(req.url , true);
    const gg = fs.appendFileSync(`log.txt` , log )
    console.log(myurl, "h1");
    
    console.log('h2');
    
    res.end('hello from server')
});

myServer.listen(8000 , ()=>{
    console.log("Server started");
})
