const integerMap = {
  'I': 1,
  'V': 5,
  'X': 10,
  'L': 50,
  'C': 100,
  'D': 500,
  'M': 1000
}

const romanToInteger = (s) => {
  let sum = 0;
  let i = 0;
  while (i < s.length){
    let current = integerMap[s[i]];
    let next = integerMap[s[i+1]]
    if(current < next){
      sum += next - current;
      i += 2;
    } else {
      sum += current;
      i++
    }
  }

return sum;
}

console.log(romanToInteger('MMMCDLXIX')) // 3