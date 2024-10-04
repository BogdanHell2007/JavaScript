// Time complexity -> Timpul care ii ia un algoritm pentru a rula
// Space complexity -> Spatiul care il ia un algoritm pentru a rula

//Daca aplicatia trebuie sa fie rapida si are o gramada de memorie de lucrat -> nu trebuie sa ne ingrijoram despre Sapce complexity
//Daca ai putina memorie ar trebui sa alegi un algoritm mai lent -> mai putin spatiu

//Big-O "notation" -> numit si "the worst time complexity" -> complexitatea unui algoritm care foloseste termeni algebrici

// TIME COMPLEXITY
// LINEAR 
function Sum(n){           //n = 4
    
    //axecuta// 
    let  total = 0;  //-------> 1 time
    
    //for-ul este doar o repetitie pentru linia 19
    for(let i = 0; i <= n; i++){
        
        //executa//
        total += i; // --------> 4 Times (n = 4 (n = input)) // in functie de n
    }
    
    //executa//
    return total; // ----------> 1 Time 

    // BIG - O in time complexity este 6 or O(6)-LINEAR
}
//cum nu putem spune timpul pe care il ia un algoritm ca sa fie executat putem spune count ul bazat pe input ul nostru



//CONSTANT
function summation(){
    
    //executa//
    return (n * (n + 1)) / 2; // -------> 1 Time 

    // se numeste "CONSTANTA" deoarece se exrcuta o linie doar

    // O(1) - CONSTANTA
}



//QUANDRATIC
for(let a = 0; a <= n; a++){
    
    for(let b = 0; b <= a; b++){

        // code
    }

    // O(POW(n, 2))
}




//CUBIC
for(let a = 0; a <= n; a++){
    
    for(let b = 0; b <= a; b++){

       for(let c = 0; c <= b; c++){
         
        // code
       } 
    }

    // O(POW(n, 3))
}