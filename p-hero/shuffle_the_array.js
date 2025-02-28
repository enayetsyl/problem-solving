const nums = [1,2,3,4,4,3,2,1]
const n = 4;

const shuffle = (nums, n)=>{
const shuffle1 = [];
for(let i=0; i <n; i++){
  shuffle1.push(nums[i])
  shuffle1.push(nums[n+i])
}
return shuffle1;
}

console.log(shuffle(nums, n))