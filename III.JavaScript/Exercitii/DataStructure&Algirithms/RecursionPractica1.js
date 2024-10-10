function adunare(n){

    if(n == 1){

        return 1;
    }

    else{

        return n + adunare(n - 1);
    }

}

console.log(adunare(4));

