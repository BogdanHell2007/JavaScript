function commonPrefix(array){
   arr1 = [];
   arr2 = [];
   arr3 = [];

   let cuv1 = '';
   let cuv2 = '';
   let cuv3 = '';

   let arrayc;
   let arrayc2;
   let arrayc3;

   for(let i = 0; i < array.length; i++){
    
       switch(array[i]){
         case array[0]:
            arr1.push(array[i]);
            break;

         case array[1]:
            arr2.push(array[i]);
            break;
        
         case array[2]:
            arr3.push(array[i]);
            break;
         }
   }
   
   //din array in string
   for(let a = 0; a < arr1.length; a++){

     arrayc = arr1.join(" ")
   }

   for(let b = 0; b < arr2.length; b++){

      arrayc2 = arr2.join(" ")
   }

   for(let c = 0; c < arr2.length; c++){

      arrayc3 = arr3.join(" ")
   }
 
   //scoaterea cifrelo[2]

   for(let x = 0; x < 2; x++){

    cuv1 += arrayc[x]
   }

   for(let y = 0; y < 2; y++){

      cuv2 += arrayc2[y]
   }
   
   for(let z = 0; z < 2; z++){

      cuv3 += arrayc3[z]
   }
  
   
   if(cuv1 == cuv2 && cuv2 == cuv3){

      console.log(cuv1)
   }

   else {

      console.log("Nu s-a gasit prefix")
   }
}


array = ["poto", "portocala", "por"];

commonPrefix(array)







