// // // How to print something 
// // console.log("hello")



// // // Var globally use hota hai , let is modernly used jisko hum ek bar likh ke bhi change kar sakte hai whereas const ko hum change nhi kar sakenge 



// // // agar humne koi variable declare kar diya but koi value assign nhi ki than initially it will be undefined 



// // // the below command is used to treat all js code as newer version    
// // "use strict";



// // // Datatype in js :- 

// // let name = "hitesh"
// // let age = 18
// // let isLoggedIn = false
// // let state;

// // // number => 2 to power 53
// // // bigint
// // // string => ""
// // // boolean => true/false
// // // null => standalone value
// // // undefined => 
// // // symbol => unique


// // // object
// // console.log(typeof undefined); // undefined
// // console.log(typeof null); // object



// // // Datatype Conversion :- 

// // let score = "33"

// // // To check the type of datatype 

// // //console.log(typeof score);
// // //console.log(typeof(score));

// // let valueInNumber = Number(score)
// // //console.log(typeof valueInNumber);
// // //console.log(valueInNumber);

// // // Agar kisi variable ko ek datatype se number mai change kare toh kya ans ayega
// // // "33" => 33          string to number
// // // "33abc" => NaN       string to number
// // //  true => 1; false => 0        boolean to number
// // // null => 0       null to number
// // // undefined => nan       undefined to number


// // // pre and post increment 

// // // Pre increment 
// // let x = 1;
// // let y = ++x;
// // console.log(x , y);  // output :- 2 2 

// // // post increament 
// // let x = 1;
// // let y = x++;
// // console.log(x , y);  // output :- 2 1 



// // // === it will check the value as well as the datatype 



// // // Two type of datatypes are their :- 

// // // 1.primitive :- 
// // // It consists of String , number , boolean , null , undefined , symbol , bigint 

// // // 2. Non primitive datatype :- (reference type)
// // // It consists of array , objects , function 



// // // Stack and heaps memory 

// // // Stack Memory :- 
// // // It is used for primitive type of datatype 
// // // Jo bhi variable declare kiya uski copy milti hai hume 

// // let sname = 'het'; 
// // // Here as it is a primitive datatype so it will use stack memory so it will make a copy of sname in secondnname
// // // so if we change secondnname than that will only change sname will not get change whereas in heaps memory original will also get cahnge  
// // let secodnname = sname;
// // secodnname = "shah";

// // // Heaps Memory :-
// // // It is used for reference type of datatypes 
// // // Jo bhi variable declare kiya uska reference milta hai hume 




// // // String In javascript 

// // const name = "hitesh";
// // const repoCount = 50;
// // let gamename = "pubg"
// // console.log(`Hello my name is ${name} and my repo count is ${repoCount}`);


// // // methods in string 

// // // console.log(gameName.length);   --> 4
// // // console.log(gameName.toUpperCase()); --> PUBG
// // console.log(gameName.charAt(2)); --> b
// // console.log(gameName.indexOf('g')); --> 3

// // const newString = gameName.substring(0, 2)
// // console.log(newString); --> pu

// // const anotherString = gameName.slice(-1, -3)
// // console.log(anotherString); --> gb

// // const newStringOne = "   hitesh    "
// // console.log(newStringOne);
// // console.log(newStringOne.trim()); --> hitesh

// // const url = "https://hitesh.com/hitesh%20choudhary"

// // console.log(url.replace('%20', '-')) --> https://hitesh.com/hitesh-choudhary

// // console.log(url.includes('sundar')) --> false

// // console.log(gameName.split('-')); 




// // // Number and maths in javascript 

// // const balance = new Number(100)

// // // console.log(balance.toString().length);  --> will convert it into string 
// // // console.log(balance.toFixed(1)); --> how much decimal chahiye hume like here it will show 100.0

// // const otherNumber = 123.8966

// // // console.log(otherNumber.toPrecision(4)); --> will return a string and will do precision 

// // const hundreds = 1000000
// // // console.log(hundreds.toLocaleString('en-IN')); commans indian standard se honge 

// // // +++++++++++++ Maths +++++++++++++++++++++++++++++

// // // console.log(Math);
// // // console.log(Math.abs(-4));
// // // console.log(Math.round(4.6));
// // // console.log(Math.ceil(4.2));
// // // console.log(Math.floor(4.9));
// // // console.log(Math.min(4, 3, 6, 8));
// // // console.log(Math.max(4, 3, 6, 8));

// // console.log(Math.random());
// // console.log((Math.random()*10) + 1);
// // console.log(Math.floor(Math.random()*10) + 1);

// // const min = 10
// // const max = 20

// // // Agar hume min and max ke bich mai hi number cahiye than 
// // console.log(Math.floor(Math.random() * (max - min + 1)) + min)



// // // Date And time in javascript 

// // // How to declare dates :- 

// // let myDate = new Date()
// // // console.log(myDate.toString()); --> wed mar 01 2023 12:03:41 
// // // console.log(myDate.toDateString()); -->  wed mar 01 2023
// // // console.log(myDate.toLocaleString());--> 3/1/2023, 12:04:19 PM
// // // console.log(typeof myDate); --> Object

// // // let myCreatedDate = new Date(2023, 0, 23)
// // // let myCreatedDate = new Date(2023, 0, 23, 5, 3)
// // // let myCreatedDate = new Date("2023-01-14")
// // let myCreatedDate = new Date("01-14-2023")
// // // console.log(myCreatedDate.toLocaleString());

// // // let myTimeStamp = Date.now() --> will give the currect date (in milisec)

// // // console.log(myTimeStamp);
// // // console.log(myCreatedDate.getTime()); 
// // // console.log(Math.floor(Date.now()/1000)); --> will convert it into second 

// // let newDate = new Date()
// // console.log(newDate);
// // console.log(newDate.getMonth() + 1);
// // console.log(newDate.getDay());

// // // `${newDate.getDay()} and the time `

// // // In this way we can customize the date 
// // newDate.toLocaleString('default', {
// //     weekday: "long",
// // })



// // // Array in javascript 

// // Ways to write an arrays 
// // arrays will make a shallow copy as it uses heaps memory 
// const myArr = [0, 1, 2, 3, 4, 5]
// const myHeors = ["shaktiman", "naagraj"]
// const myArr2 = new Array(1, 2, 3, 4)

// // console.log(myArr[1]);

// // Array methods

// // myArr.push(6) --> [0, 1 , 2 ,3 ,4 ,5 ,6]
// // myArr.push(7) --> [0, 1 , 2 ,3 ,4 ,5 ,6 , 7]
// // myArr.pop() --> [0, 1 , 2 ,3 ,4 ,5 ,6]

// // myArr.unshift(9)  --> [9,0, 1 , 2 ,3 ,4 ,5 ,6]
// // myArr.shift()  --> [0, 1 , 2 ,3 ,4 ,5 ,6]

// // console.log(myArr.includes(9)); --> False
// // console.log(myArr.indexOf(3)); --> 3

// // const newArr = myArr.join() --> will convert the array into a string "0,1,2,3,4,5,6"

// // console.log(myArr);
// // console.log( newArr);


// // slice, splice

// // console.log("A ", myArr);  --> [0, 1 , 2 ,3 ,4 ,5 ,6]

// // const myn1 = myArr.slice(1, 3) 

// // console.log(myn1); --> [1 , 2]
// // console.log("B ", myArr); --> [0, 1 , 2 ,3 ,4 ,5 ,6]


// // const myn2 = myArr.splice(1, 3)  
// // console.log("C ", myArr);  --> [0 ,4 ,5 ,6]  (It will manipulate the original array )
// // console.log(myn2);  --> [ 1 , 2 ,3 ]




// const marvel_heros = ["thor", "Ironman", "spiderman"]
// const dc_heros = ["superman", "flash", "batman"]

// // marvel_heros.push(dc_heros) 

// // console.log(marvel_heros);  --> ["thor", "Ironman", "spiderman" ,[ "superman", "flash", "batman"]]
// // console.log(marvel_heros[3][1]); --> flash

// // const allHeros = marvel_heros.concat(dc_heros)
// // console.log(allHeros); --> ["thor", "Ironman", "spiderman" , "superman", "flash", "batman"] only works when store it in new array variable

// const all_new_heros = [...marvel_heros, ...dc_heros] --> ["thor", "Ironman", "spiderman" , "superman", "flash", "batman"]

// // console.log(all_new_heros);

// // const another_array = [1, 2, 3, [4, 5, 6], 7, [6, 7, [4, 5]]]

// // const real_another_array = another_array.flat(Infinity) 
// // console.log(real_another_array);   --> [ 1,2 ,3 ,4 ,5 ,6 ,7,6,7,4,5]



// // console.log(Array.isArray("Hitesh")) --> False 

// // If we want to convert anything into array 
// console.log(Array.from("Hitesh"))

// // This will not convert it into array because hume phele bolna padega kisko array banau like keys ko ya values ko so it will return []
// console.log(Array.from({name: "hitesh"})) // interesting


// let score1 = 100
// let score2 = 200
// let score3 = 300

// // console.log(Array.of(score1, score2, score3)); --> [100,200,300]




// // Objects In js :- 

// // singleton
// // Object.create

// // object literals

// const mySym = Symbol("key1")

// // This is how we can create an object 
// const JsUser = {
//     name: "Hitesh",
//     "full name": "Hitesh Choudhary",
//     // [mySym]: "mykey1", --> This is how we can create symbols in js 
//     age: 18,
//     location: "Jaipur",
//     email: "hitesh@google.com",
//     isLoggedIn: false,
//     lastLoginDays: ["Monday", "Saturday"]
// }

// // console.log(JsUser.email) --> This is one method 
// // console.log(JsUser["email"]) --> This is second method 
// // console.log(JsUser["full name"])
// // console.log(JsUser[mySym])

// // JsUser.email = "hitesh@chatgpt.com" --> Email will change to hitesh@chatgpt.com
// // Object.freeze(JsUser) -->  Once we write this we cannot change it further 
// JsUser.email = "hitesh@microsoft.com"
// // console.log(JsUser); --> hitesh@chatgpt.com

// // We can also add function in object 
// JsUser.greeting = function(){
//     console.log("Hello JS user");
// }
// JsUser.greetingTwo = function(){
//     console.log(`Hello JS user, ${this.name}`);
// }

// // console.log(JsUser.greeting()); --> "hello js user"
// // console.log(JsUser.greetingTwo()); --> "hello js user hitesh "



// // const tinderUser = new Object()
// // This is how we can create empty object 
// const tinderUser = {}

// // Adding keys and values to the object 
// tinderUser.id = "123abc"
// tinderUser.name = "Sammy"
// tinderUser.isLoggedIn = false

// // console.log(tinderUser);

// const regularUser = {
//     email: "some@gmail.com",
//     fullname: {
//         userfullname: {
//             firstname: "hitesh",
//             lastname: "choudhary"
//         }
//     }
// }

// // console.log(regularUser.fullname.userfullname.firstname);

// const obj1 = {1: "a", 2: "b"}
// const obj2 = {3: "a", 4: "b"}
// const obj4 = {5: "a", 6: "b"}

// // Will create 2d objects 
// // const obj3 = { obj1, obj2 }

// // if we want to add 1d object only then 
// // const obj3 = Object.assign({}, obj1, obj2, obj4)

// // This is one more method to merge two objects 
// const obj3 = {...obj1, ...obj2}
// // console.log(obj3);


// const users = [
//     {
//         id: 1,
//         email: "h@gmail.com"
//     },
//     {
//         id: 1,
//         email: "h@gmail.com"
//     },
//     {
//         id: 1,
//         email: "h@gmail.com"
//     },
// ]

// users[1].email
// // console.log(tinderUser);

// // Will give all the keys in the form of array 
// // console.log(Object.keys(tinderUser));

// // Wil give all the values in the form of array 
// // console.log(Object.values(tinderUser));


// // console.log(Object.entries(tinderUser));

// // Agar asi koi keys hogi than will give true else false 
// // console.log(tinderUser.hasOwnProperty('isLoggedIn'));


// const course = {
//     coursename: "js in hindi",
//     price: "999",
//     courseInstructor: "hitesh"
// }

// // course.courseInstructor

// // This is how we can desture an object 
// const {courseInstructor} = course

// console.log(courseInstructor);


// // How to write basic function 

// function returnSecondValue(getArray){
//     return getArray[1]
// }

// // console.log(returnSecondValue(myNewArray));
// console.log(returnSecondValue([200, 400, 500, 1000]));


// // agar hume pata nhi ho kitne inputs user dega than we can write ... 
// function calculateCartPrice(...num1){
//     return num1
// }

// console.log(calculateCartPrice(100 , 200 , 300 ))



// // Global and local scope 
// // Global scope can be used inside the function but local scope cannot used outside the function 

// // This below are the two ways we can write a function but in the first case we can call the function before decalring it but in second we cant 
// console.log(addone(5))
// function addone(num){
//     return num + 1
// }


// // This below code will give error so we cant call the function before declaring it while we are storing it in a variable 
// addTwo(5)

// // This below function is known as expression 
// const addTwo = function(num){
//     return num + 2
// }


// // This keyword 
// // It is used to refer to the current context 
// // This keyword will only work inside object agar koi seperate functionm ai decalre kiya humne this than it wont work 

// // let username = "het";
// // let name = {
// //     username: "shah",    
// //     welcome: function(){
// //         return this.username 
// //     }
// // }
// // console.log(username) --> het
// // console.log(name.welcome()); --> shah




// // Arrow function in js 
// // arrow function mai this keyword pe {} print hoga where as simple function mai this ko print kiya than vo bohot sari values dega 

// // const addTwo = (num1, num2) => {
// //     return num1 + num2
// // }

// // This is also one way to write the arrow function 
// // hum single line mai agar kuch return karva rahe hai without writing return statement than we can't use {}
// // const addTwo = (num1, num2) =>  num1 + num2

// // Agar humne similar way mai object ko return karvana ho than 
// // const addtwo = ()=> ({username:"het"})



// // Immediately Invoked Function Expressions (IIFE)

// // Jase hi start karenge automatically run ho jana chaihye 

// (function chai(){
//     // named IIFE
//     console.log(`DB CONNECTED`);
// })(); // --> Here semicolon is compulsory 


// ( (name) => {
//     console.log(`DB CONNECTED TWO ${name}`);
// } )('hitesh');



// // How to write if else statement in js 

// if ( temperature === 40 ){
//     console.log("less than 50");
// } else {
//     console.log("temperature is greater than 50");
// }




// // Basic switch Statement :- 

// const month = "march"

// switch (month) {
//     case "jan":
//         console.log("January");
//         break;
//     case "feb":
//         console.log("feb");
//         break;
//     case "march":
//         console.log("march");
//         break;
//     case "april":
//         console.log("april");
//         break;

//     default:
//         console.log("default case match");
//         break;
// }



// // Thruthy values in js 

// // falsy values
// // false, 0, -0, BigInt 0n, "", null, undefined, NaN

// //truthy values
// // "0", 'false', " ", [], {}, function(){}



// // Nullish Coalescing Operator (??): null undefined

// let val1;
// // val1 = 5 ?? 10
// // val1 = null ?? 10
// // val1 = undefined ?? 15
// val1 = null ?? 10 ?? 20



// console.log(val1);

// // Terniary Operator

// // condition ? true : false

// const iceTeaPrice = 100
// iceTeaPrice <= 80 ? console.log("less than 80") : console.log("more than 80")





// // For loop in js 

// for (let i = 0; i <= 10; i++) {
//     const element = i;
//     if (element == 5) {
//         //console.log("5 is best number");
//     }
//     //console.log(element);
// }


// // While Loop In Js 


// let index = 0
// // while (index <= 10) {
// //     console.log(`Value of index is ${index}`);
// //     index = index + 2
// // }



// // do while loop in js 

// let score = 11

// do {
//     console.log(`Score is ${score}`);
//     score++
// } while (score <= 10);




// // Higher order funtion 

// const arr = [1, 2, 3, 4, 5]

// for (const num of arr) {
//     //console.log(num);
// }



// // Maps

// // Maps are iterable like this 
// const map = new Map()
// map.set('IN', "India")
// map.set('USA', "United States of America")
// map.set('Fr', "France")
// map.set('IN', "India")


// // console.log(map);

// for (const [key, value] of map) {
//     // console.log(key, ':-', value);
// }



// // But we cannot iterate object like this this will give us an error 
// const myObject = {
//     game1: 'NFS',
//     game2: 'Spiderman'
// }

// // for (const [key, value] of myObject) {
// //     console.log(key, ':-', value);
    
// // }



// // For in loop will work in objects 

// const myObject = {
//     js: 'javascript',
//     cpp: 'C++',
//     rb: "ruby",
//     swift: "swift by apple"
// }

// for (const key in myObject) {
//     //console.log(`${key} shortcut is for ${myObject[key]}`);
// }




// // The difference between for of and for in loop is for in loop mai it iwll give indexes whereas for of loop mai it will give values 
// // In for of loop mai objects are not iterable whereas in for in loop map wont be iterable 



// // For each loop in Js 

// const coding = ["js", "ruby", "java", "python", "cpp"]

// // coding.forEach( function (val){
// //     console.log(val);
// // } )

// // Har ek for each loop mai item index and oura ka pura array pass on hota hai 

// // coding.forEach( (item , index , arr) => {
// //     console.log(item);
// // } )

// // This is one of the way we can iterate through array 

// // We can even store for each loop in a variable as well 
// // const coding = ["js", "ruby", "java", "python", "cpp"]


// // const values = coding.forEach( (item) => {
// //     //console.log(item);
// //     return item
// // } )

// // console.log(values); --> it will not return anything from the loop bhale hi humne return statement lagaya ho 

// // so agar sach mai kuch funciton mai se return hi chahiye than we have to use filter method



// // Filter , map , reduce function in js 

// const myNums = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

// // const newNums = myNums.filter( (num) => {
// //     return num > 4
// // } )

// // console.log(newNums);



// // Map function in js 

// const myNumers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

// // const newNums = myNumers.map( (num) => { return num + 10})


// // We can even chain multiple methods like these 
// const newNums = myNumers
//                 .map((num) => num * 10 )
//                 .map( (num) => num + 1)
//                 .filter( (num) => num >= 40)




// // Reduce function in js 

// const myNums = [1, 2, 3];

// // const myTotal = myNums.reduce(function (acc, currval) {
// //     console.log(`acc: ${acc} and currval: ${currval}`);
// //     return acc + currval
// // }, 0)

// const myTotal = myNums.reduce( (acc, curr) => acc+curr, 0)

// console.log(myTotal);


// const shoppingCart = [
//     {
//         itemName: "js course",
//         price: 2999
//     },
//     {
//         itemName: "py course",
//         price: 999
//     },
//     {
//         itemName: "mobile dev course",
//         price: 5999
//     },
//     {
//         itemName: "data science course",
//         price: 12999
//     },
// ]

// const priceToPay = shoppingCart.reduce((acc, item) => acc + item.price, 0)

// console.log(priceToPay);



