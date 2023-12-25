/*You are given a program that takes the age of the user as input.
Complete the code to check if the user is an adult, 
and output to the console the corresponding boolean value.*/

function main() {
  var age = parseInt(readLine(), 10)
  var result =
    age >= 18 ? true : false;
  console.log(result)
}
