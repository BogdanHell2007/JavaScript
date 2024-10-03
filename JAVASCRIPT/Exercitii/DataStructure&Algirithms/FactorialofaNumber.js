function factorial(n){
     
    let total = 1;
    for(let i = 1; i <= n; i++){

      total *= i
    }
  return total
}
console.log(factorial(0))
console.log(factorial(4))