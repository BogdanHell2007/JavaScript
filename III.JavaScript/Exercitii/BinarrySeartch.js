function binarySeartch(array, myNum){
    
    for(let i = array.length / 2; i <= array.length / 2; i++){
    
        if(myNum < array[i]){
            
            for(let j = array.length / 2; j >= 0; j--){
        
                if(myNum == array[j]){
                    return 1
                }
            }
        
           return -1
        }

        if(myNum > array[i]){
            
            for(let x = array.length / 2; x < array.length; x++){
        
                if(myNum == array[x]){
                    return 1
                }
            }
         
            return -1
        }
    }
}

let array = [4, 12, 34, 67, 80, 96]
let myNum = 4

let valoare = binarySeartch(array, myNum)

if(valoare == 1){
    console.log("Numarul a fost gasit in array")
}

if(valoare == -1){
    console.log("Numarul nu a fost gasit in array")
}