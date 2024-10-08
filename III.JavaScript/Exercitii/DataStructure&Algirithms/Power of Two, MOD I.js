function PowerofTwo(num){

    let array = [];

    for(let i = 0; i <= num; i++){
       
        array.push(Math.pow(2, i))
    }
   
    for(let j = 0; j < array.length; j++){

        if(num == array[j]){

            return true;
        }
    }

    return false;
}

// O(n) - Linear

console.log(PowerofTwo(1))