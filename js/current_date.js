const currentDate = new Date();

const hours = currentDate.getHours();
const minutes = currentDate.getMinutes();
const seconds = currentDate.getSeconds();

const currentTime = `${hours}:${minutes}:${seconds}`;

console.log("Current Time:", currentTime);
console.log(Date().getSeconds());
