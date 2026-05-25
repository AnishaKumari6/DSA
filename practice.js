let str="Anisha"
let reverse = str.split("").reverse().join("");
console.log(reverse)
let str1=str.toLowerCase()
let count=0
for(let char of str1){
    if('aeiou'.includes(char)){
        count++;
    }
}
console.log(count)

let arr={
    name:"Anisha",
    branch:"CSE",
    Field:{
        name:'Api',
        branch :"BTech"
    }

};
console.log(arr.Field.name)