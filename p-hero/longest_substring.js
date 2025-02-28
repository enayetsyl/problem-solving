function lengthOfLongestSubstring(s) {
  let set = new Set();  // Store unique characters
  let left = 0;         // Left pointer (start of window)
  let maxLength = 0;    // Track max length

  for (let right = 0; right < s.length; right++) {
      console.log(`\nStep ${right + 1}:`);
      console.log(`Current character: ${s[right]}`);

      // If the character is already in the set, shrink the window from the left
      while (set.has(s[right])) {
          console.log(`Duplicate found: ${s[right]}. Removing ${s[left]} from window.`);
          set.delete(s[left]);  // Remove the character at 'left'
          left++;  // Move left pointer
          console.log(`New window after removing: ${Array.from(set).join('')}`);
      }

      set.add(s[right]);  // Add new character
      maxLength = Math.max(maxLength, right - left + 1);  // Update max length

      console.log(`Window: ${Array.from(set).join('')}`);
      console.log(`Left pointer: ${left}, Right pointer: ${right}`);
      console.log(`Max length so far: ${maxLength}`);
  }

  return maxLength;
}

// Test cases
console.log("Final Output:", lengthOfLongestSubstring("abcabcbb"));
