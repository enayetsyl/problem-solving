function integerToRoman(num) {
  const romanMap = [
      { value: 1000, numeral: "M" },
      { value: 900, numeral: "CM" },
      { value: 500, numeral: "D" },
      { value: 400, numeral: "CD" },
      { value: 100, numeral: "C" },
      { value: 90, numeral: "XC" },
      { value: 50, numeral: "L" },
      { value: 40, numeral: "XL" },
      { value: 10, numeral: "X" },
      { value: 9, numeral: "IX" },
      { value: 5, numeral: "V" },
      { value: 4, numeral: "IV" },
      { value: 1, numeral: "I" }
  ];

  let roman = "";

  console.log(`Converting ${num} to Roman numeral:`);

  for (const { value, numeral } of romanMap) {
      while (num >= value) {
          console.log(`  Adding "${numeral}" because ${num} >= ${value}`);
          roman += numeral;
          num -= value;
          console.log(`  Remaining number: ${num}`);
      }
  }

  console.log(`Final Roman numeral: ${roman}`);
  return roman;
}

// Example Usage:
console.log(integerToRoman(3469)); 
