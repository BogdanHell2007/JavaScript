function schimbare(word) {
  
   let cuv = "";
  
   for(let i = 0; i < word.length; i++){
    
      if(i % 2 == 0) {
         cuv += word[i].toUpperCase();
      }
      else {
         cuv += word[i]
      }

      if(word[i] == " ") {
         cuv += " "
      }
   }
   return cuv
}

let word = "hello";
let newWord = schimbare(word)
console.log(newWord)





