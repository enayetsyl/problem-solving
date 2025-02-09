const nums = [1,3,5,6]
const target = 7

const serachAndInsert = (nums, target) => {

  const index = nums.findIndex(num => num === target)

  if (index !== -1) {
    return index
  } else {
    nums.push(target)
    return nums.sort((a, b) => a - b).findIndex(num => num === target)
  }



}

console.log(serachAndInsert(nums, target)) // 2