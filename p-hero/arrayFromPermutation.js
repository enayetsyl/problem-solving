const nums = [0,2,1,5,3,4]

const permutationArray =(nums) => {
  let result =[]

  for(i=0; i<nums.length; i++){
    result.push(nums[nums[i]])
  }
return result;
}

console.log(permutationArray(nums)) 