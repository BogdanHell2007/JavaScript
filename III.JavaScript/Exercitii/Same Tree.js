function sameTree(tree1, tree2){
    
   let total = 0
   let total2 = 0

   for(let i = 0; i < tree1.length; i++){

    total = total * 10 + tree1[i];
   }

   for(let j = 0; j < tree2.length; j++){

    total2 = total2 * 10 + tree2[j]
   }

   if(total == total2){

    return true;
   }

   else{

    return false;
   }

}

let tree1 = [1, 5, 8, 9]
let tree2 = [1, 5, 8, 9]

console.log(sameTree(tree1, tree2))
