
let arr = [10,20,30]
let nums = [...arr, ...arr] // spread operator
console.log(nums);
console.log(nums.length);
// console.log(nums.slice(0, 2));
// console.log(nums.splice(2));

let ans = Array(5).fill(0)
console.log(ans);