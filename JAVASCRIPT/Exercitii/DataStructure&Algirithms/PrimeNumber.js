function PrimeNumber(n){
    if(n == 2){
        return true;
    }

    if(n < 2){

        return "nu exista";
    }
 
    for(let i = 2; i <= Math.sqrt(n); i++){
    
    if(n % i == 0){

        return false;
    }
   return true;
 }
}

console.log(PrimeNumber(1))
console.log(PrimeNumber(4))
console.log(PrimeNumber(7))