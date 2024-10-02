function addSort(list1, list2) {
  
   let array = []
   let temp = 0;

    for(let i = 0; i < list1.length; i++){

       array.push(list1[i])
    }
    

    for(let j = 0; j < list2.length; j++){

        array.push(list2[j])
    }
    
    for(let a = 0; a < array.length; a++){

        for(let b = 0; b < array.length - 1; b++){

            if(array[b] > array[b + 1]){

                temp = array[b]
                array[b] = array[b + 1]
                array[b + 1] = temp
            }
        }
    }

    console.log(array)
}

let list1 = [3, 4, 1,]
let list2 = [2, 6, 3, 8]

addSort(list1, list2)