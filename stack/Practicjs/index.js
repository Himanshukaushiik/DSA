// // let num =15 ;

// // while
// // do while 
// // for 
// // for each 



// // // if-else

// //     // condition ? true : false;

// //     (num==10) ? console.log("himanshu"): console.log("yashu") //ternary operator is nothing it is a second version of the IF ELSE statement.

// // //     let num =yashu;

// // // if (num == 20) {
// // //     console.log("himanshu");
// // // } else {
// // //     console.log("yashu");
// // // }

// // let i =1;

// // while(5<=5){
// //     i++; //+1 5+1
// //     console.log(i); //phele value print karde

// // }


// for (let i = 1; i <=5;) {
    

//     console.log(i);
//     i++;
    
    
// }


// /*loop  
// 1 = console.log(i)

// 3<=5 {
// 3
// (i++ = i+1) -> 3+1 =4
// }

// 5<=5  ->   


// utar = 2 3 4 5 6


// let himanshuchimni = {
//     harkat: "h",
//     umar: 22,
//     padhai: "Zero",
//     city: "Dattaur City",
//     greet: function() {
//         console.log(`hey my name is himanshu chimni and i am a good  ${this.harkat} and my age is ${this.umar}`)
//     }
// }

// // console.log(himanshuchimni);
// // himanshuchimni.greet();
// console.log(himanshuchimni.city);
// console.log(himanshuchimni["umar"])



// */ 

// let student = {
//     name: "Alice",
//     age: 22,
//     marks: 85, 
//     city:"Rohtak",
//    greet: function(){
//     console.log(`Hello my name is ${this.name}`)
//    }
// }


// console.log(student)

//  dot notation / bracket notation - used to access properties and methods of objects 

// console.log(student.name)
// console.log(student["age"])


// student.greet()



// let student = {
//     name: "yashu",
//     age: 22,
//     marks : [76,82,70,92,67],
//     address : {
//         zipCode: 12345,
//         city: "New York",
//         country: "USA"
//     },
//     greet: function(){
//         console.log(`Hello my name is ${this.name}`)
//     }
// }

// console.log(student.marks[2]);
// console.log(student.address.city) //newyork 


//  this keyword - it refers to the current object that is executing the code.  it is used to access the properties and methods of the current object within its own methods.

 object.keys() //- returns an array of given object's property names 

console.log(Object.keys(student))

// //  Object.values() - returns an array of given object's property values

// console.log(Object.values(student))

// // Object.enteries() - returns an array of given object's own [key, value] pairs

// console.log(Object.entries(student))


//  for in loop - used to iterate over the properties of an object

// for(let key in student ){
//     console.log(key, student.key)
// }


//  add new property to object
// student.email = "alice@example.com";


// console.log(student)


//  update existing property of an object

// student.age = 23;
// console.log(student)


//  delete a property from an object
// delete student.email;

// console.log(student)


//  Object.freeze() - it is used to freeze an object which means we cannot add, update or delete any property from the object after freezing it.


// Object.freeze(student)

// student.email = "alice@example.com"
// delete student.age

// console.log(student)


//  Class - class is a template for creating objects. it is used when we want to create multiple objects with some similar properties and methods. it prevents code duplication and makes code reusable .

// class Student {
//     name ;
//     age ;
//     marks ;
//     constructor(name, age, marks){
//         this.name = name;
//         this.age = age;
//         this.marks = marks;
//     }
// }




// let student1 = new Student("Alice", 22, 85);

// let student2 = new Student("Bob", 24, 90);


// console.log(student1)
// console.log(student2)