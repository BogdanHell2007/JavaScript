function isPowerofTwo(num){

    if(num < 1){

        return "nu exista!";
    }

    while(num > 1){

        if(num % 2 !== 0){

            return false;
        }
        
        num = num  / 2;
    }

    if(num == 1){

        return true;
    }
}

//0(log n) - Logarithmic

console.log(isPowerofTwo(8)) // true
console.log(isPowerofTwo(10)) // false
console.log(isPowerofTwo(9))  // fasle