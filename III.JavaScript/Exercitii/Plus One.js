function plusone(array){
    
    let newArray = []
    const result = array.reduce((acc, curr) => acc * 10 + curr, 0);
    
    let total = result + 1;

    for(let i = 0; i < total.toString().length; i++){

       newArray.push(parseInt(total.toString()[i]))
    }

    console.log(newArray)
}

let array = [1, 4, 5];

plusone(array);