const operations = ["--X","X++","X++"]

const add_substruct_operation = (operations) => {
  let result =0;
  for(let i =0; i < operations.length; i++){
    if(operations[i] === "X++" || operations[i] === "++X"){
      result += 1;
    }else{
      result -= 1;
    }
  }
}

add_substruct_operation(operations)