function PatratPerfect(num){

    let radical;
    let power;

    radical = Math.sqrt(num)
    if(num < 1){

        return "it's not posible!"
    }
   
    if(radical % 1 == 0){

        return "is power of 2"
    }

    else{

        return "it's not power of 2"
    }

}

console.log(PatratPerfect(-1))