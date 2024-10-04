function Seartch(array, num) {

  let secondArray = [1, 3, 4, 6]
  let temp = 0
  
  if(array.includes(num)){

    for(let z = 0; z < array.length; z++){
        
      if(num == array[z]){

        console.log(z)
      }
    }
  }

  else{
    if(num > secondArray[3]){

      for(let i = array[3] + 1; i <= num; i++){

        secondArray.push(i)
      }
      
      for(let j = 0; j < secondArray.length; j++){

        if(num == secondArray[j]){

          console.log(j)
        }
      }
    }
    
    else {

      secondArray.push(num)

     for(let a = 0; a < secondArray.length; a++){
    
        for(let b = 0; b < secondArray.length - 1; b++){
    
          if(secondArray[b] > secondArray[b + 1]){
    
            temp = secondArray[b]
            secondArray[b] = secondArray[b + 1]
            secondArray[b + 1] = temp
          }
        }
      }

      for(let y = 0; y < secondArray.length; y++){

        if(num == secondArray[y]){

          console.log(y)
        }
      }
    }
  }
}

let array = [1, 3, 4, 6]
let num = 100
console.log(array)
Seartch(array, num)

