if(total > 9){
    let digits = total.toString().split('')
    
    for(let a = 0; a < digits.length; a++){
        array2.push(parseInt(digits[a]))
    }
}

array.push(total)

for(let j = 0; j < array2.length; j++){
    total2 += array2[j]
}


for(let b = 0; b < array.length; b++){
        
    if(array[b] > 9){
        array[b] = total2
    }
}

for(let x = 0; x < array.length; x++){
    total3 += array[x]
}
