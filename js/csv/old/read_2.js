const fs = require('fs')
fs.readFile('./2024-09-09_log.csv', 'utf8', (err, data) => {
  if (err) console.log(err);
  else console.log(data);
})
