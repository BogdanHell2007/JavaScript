function ArraytoInt(array){
    let total = 0;
    
   for(let i = 0; i < array.length; i++){
    
    total = total * 10 + array[i]
   }

   console.log(total)
}

let array = [1, 4, 5]

ArraytoInt(array)