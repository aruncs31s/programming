const mysql = require("mysql");

// Create a connection to the database
const connection = mysql.createConnection({
  host: "localhost",
  user: "aruncs",
  password: "dhashamulam",
  database: " ",
});

// Connect to the database
connection.connect();

// Perform a query
connection.query("SELECT * FROM rooms", function (error, results, fields) {
  if (error) throw error;
  console.log("The solution is: ", results);
});

// Close the connection
connection.end();
