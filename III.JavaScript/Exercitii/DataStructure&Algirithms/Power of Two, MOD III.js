function isPowerofTwo(num){

    if(num < 1){

        return false;
    }

    return (num & (num -1)) === 0
}

console.log(isPowerofTwo(8)) // true
console.log(isPowerofTwo(10)) // false
console.log(isPowerofTwo(7))  // fasle

// O(1) - Constant