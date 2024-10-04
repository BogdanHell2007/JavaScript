let array = [3, 4, 6, 9, 1, 10, 2, 5, 8, 7];
let temp;

for(let a = 0; a < array.length - 1; a++){
    
    for(let b = 0; b < array.length - a - 1; b++){
        
        if(array[b + 1] < array[b]){
            temp = array[b]
            array[b] = array[b + 1]
            array[b + 1] = temp
        }
    }
}

console.log(array)
   
