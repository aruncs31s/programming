const needle = require("needle");

const url = "https://people.sc.fsu.edu/~jburkardt/data/csv/deniro.csv";

console.log(needle.get(url))

