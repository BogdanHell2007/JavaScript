function palindrome(numar){

   if(numar % 11 == 0){

    return 1;
   }

   else{

    return -1;
   }

}

let numar = 99;

let functie = palindrome(numar)

if(functie == 1){

    console.log("Numarul este un Palindrome");
}

if(functie == -1){

    console.log("Numarul nu este un Palindrome");
}