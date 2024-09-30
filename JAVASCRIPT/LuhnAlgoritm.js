function cardcheck(card) {
   let array =[]
   let total1 = 0
    
    for(let i = 0; i < card.length; i++){
        
        if(i % 2 == 1) {
          array.push(parseInt(card[i]))
        }
      
    }

    for(let a = 0; a < array.length; a++){
        total1 += array[a]
    }
    
    return total1
}

function cardcheck2(card){
    let array =[]
    let total = 0
    let array2 = []
    let total2 = 0
    let total3 = 0
    
    //iteram prinre numere
    for(let i = 0; i < card.length; i++){
       
        //iteram printre numerela care indeplinesc conditia
        if(i % 2 == 0){
            
            //si le inmultim pe acelea cu 2
            array.push(parseInt(card[i]) * 2)
        }
    }
    
    for(let j = 0; j < array.length; j++){

        if(array[j] > 9){
            let digits = array[j].toString().split('')
            
            for(let a = 0; a < digits.length; a++){
                array2.push(parseInt(digits[a]))
            }
        }
    }

    for(let x = 0; x < array2.length; x++){
        total += array2[x]
    }

    for(let z = 0; z < array.length; z++){

        if(array[z] > 9){
            array[z] = 0
        }
    }

    for(let y = 0; y < array.length; y++){
        total2 += array[y]
    }

    total3 = total2 + total

    return total3
}
    

let card = "4847352989263094";
let total1 = cardcheck(card)
let total2 = cardcheck2(card)

let total3 = total1 + total2

if(total3 % 2 == 0) {
    console.log("Card valid")
}

else{
    console.log("Card invalid")
}







