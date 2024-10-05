const csv = require('csv-parser');
const fs = require('fs');
const results = [];

fs.createReadStream('./2024-09-09_log.csv')
  .pipe(csv())
  .on('data', (data) => results.push(data))
  .on('end', () => {
    // Loop through the results array and get only the 'Rain Volume' field
    results.forEach(row => {
      const rainVolume = row['Rain Volume'].trim(); // .trim() to remove any extra spaces
      console.log(`Rain Volume: ${rainVolume}`);
      // results.push(rainVolume)
      // print_csv(rainVolume);
    });
  });
function print_csv(value) {
  console.log(new_array)
}
