const fs = require('fs');
const csv = require('csv-parser');

const results = [];
fs.createReadStream('./2024-09-09_log.csv')
  .pipe(csv())
  .on('data', (data) => results.push(data))
  .on('end', () => { obj_to_array(results) })

function obj_to_array(results) {
  const new_array = Object.values(results);
  // console.log(new_array[1])
  extract_time(new_array);
}
// create a function that extract only time value from the array
function extract_time(new_array) {
  const time = new_array[0].Time;
  console.log(time)
}

function getCurrentTime() {
  const date = new Date();
  const time = date.getHours() + ":" + date.getMinutes() + ":" + date.getSeconds();
  return time;
}
