function lastWord(text) {

    for(let i = 0; i < text.length; i++){
        
        let words = text.split(/\s+/)

        return words[words.length - 1].length
    }

}

let text = "imi place sa programez";

console.log(lastWord(text));