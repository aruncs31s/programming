//snail in the wall solution
/* qn : snail climbs a wall every day and night, it climbs 7 meters during night and falls down 2meters during night find how much days will the snail take to climb the given distance(depth)   example input 31 and example output = 5 days only number is to be outputed*/
function main() {
    var depth = parseInt(readLine(), 10);
    //your code goes here
    let days = 0;
    let depths = 0;
    for(;;){
      depths += 7;
      
      days = days + 1;
      if(depths >= depth)
      {
          break
      }
      
      depths -= 2;
    
   
    }
    
    console.log(days)
    
}
