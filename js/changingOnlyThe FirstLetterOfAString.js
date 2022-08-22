var myName = "Naruto";
var myNameInReverse = "";
//var i = 0;
//var j = myName.length ; 
//i = 0;
var tmp = "";
let j = myName.length - 1;
//myNameInReverse = myName[j];
for (let i = j ; i >= 0 ;i--){
    tmp += myName[i];


} 
/* while (j != 0){
    do tmp += myName[j]
    j = j - 1;
}*/
console.log(tmp);
