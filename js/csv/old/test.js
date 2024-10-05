const csvParser = require("csv-parser");
const needle = require("needle");

const result = [];

const url = "https://people.sc.fsu.edu/~jburkardt/data/csv/deniro.csv";

needle
  .get(url)
  .pipe(csvParser())
  .on("data", (data) => {
    result.push(data);
  })
  .on("done", (err) => {
    if (err) console.log("An error has occurred");
    else console.log(result);
  });
