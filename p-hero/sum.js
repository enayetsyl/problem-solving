const nums = [-1,0,1,2,-1,-4]

const sum = (nums)=>{
  let result = []
  for(let i=0; i<nums.length; i++){
    for(let j=i+1; j<nums.length; j++){
      for(let k=j+1; k<nums.length; k++){
        if(nums[i] + nums[j] + nums[k] === 0){
          result.push([nums[i],nums[j],nums[k]])
        }
      }
    }
  }

  const data = Array.from(new Set(result.map(arr => JSON.stringify(arr.sort((a,b) => a - b))))).map(arr => JSON.parse(arr))
  return data;
}

console.log(sum(nums))