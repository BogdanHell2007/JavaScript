// pagina pentru testarea sau gasirea solutiilor intr o problema

function arr(n){
  
  let array = [0, 2]
  for(let i = 2; i < n; i++){

    array[i] = array[i - 1] + array[i - 2]
  }
  return array;
}

console.log(arr(4))