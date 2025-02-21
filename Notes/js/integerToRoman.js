const roman = [
  { integer: 1000, rom: "M" },
  { integer: 900, rom: "CM" },
  { integer: 500, rom: "D" },
  { integer: 400, rom: "CD" },
  { integer: 100, rom: "C" },
  { integer: 90, rom: "XC" },
  { integer: 50, rom: "L" },
  { integer: 40, rom: "XL" },
  { integer: 10, rom: "X" },
  { integer: 9, rom: "IX" },
  { integer: 5, rom: "V" },
  { integer: 4, rom: "IV" },
  { integer: 1, rom: "I" }
];
let result = ""
const integerToRoman = (input) => {

for( const {integer, rom} of roman){
  while(input >= integer){
    result += rom;
    input -= integer;
  }

}

return result;
  
}


console.log(integerToRoman(3469))