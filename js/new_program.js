function nth_alexander_number(n) {
  if (n === 1) {
    return 2;
  } else {
    return 2 * nth_alexander_number(n - 1) + 1;
  }
}
console.log(nth_alexander_number(1)); // 2
