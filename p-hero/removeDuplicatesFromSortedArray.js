const removeDuplicates = (nums) => {
  if (nums.length === 0) return 0; // Edge case

  let i = 0; // Pointer for the unique elements
  console.log(`Initial nums: ${nums}`);
  console.log(`Starting i = ${i}\n`);

  for (let j = 1; j < nums.length; j++) {
    console.log(`--------------------------`);
    console.log(`Iteration ${j}: (i=${i}, j=${j})`);
    console.log(`Checking nums[j] = nums[${j}] = ${nums[j]} against nums[i] = nums[${i}] = ${nums[i]}`);

    if (nums[j] !== nums[i]) {
      i++; // Move the unique index forward
      nums[i] = nums[j]; // Update with new unique element
      console.log(`✅ Unique found! Updated nums[${i}] = ${nums[j]}`);
    } else {
      console.log(`❌ Duplicate found! Skipping nums[${j}] = ${nums[j]}`);
    }
    
    console.log(`Current nums: ${nums}`);
    console.log(`i = ${i}, j = ${j}\n`);
  }

  console.log(`==========================`);
  console.log(`Final nums after removing duplicates: ${nums}`);
  console.log(`Total unique elements (k): ${i + 1}`);
  console.log(`==========================`);
  return i + 1; // The number of unique elements
};

// Example Test Case
let nums2 = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4];
console.log("\nTest Case:");
console.log("Final Result:", removeDuplicates(nums2)); // Expected Output: 5
console.log("Modified nums:", nums2);
