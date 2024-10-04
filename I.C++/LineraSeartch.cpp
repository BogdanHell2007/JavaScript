#include <iostream>

int seartch(int array[], int size, int alegere);

int main() {

    int array[] = {1, 34, 56, 89};
    int size = sizeof(array) / sizeof(array[0]);
    int alegere;
    std::cin >> alegere;
    int functie = seartch(array, size, alegere);

    if(functie == 1){

        std::cout << "Numarul a fost gasit in array";
    }
  
    else if(functie == -1){
       
        std::cout << "Numarul nu a fost gasit";
    }
    
    return 0;
}

int seartch(int array[], int size, int alegere) {
    
    for(int i = 0; i < size; i++){
        
        if(alegere == array[i]){
         
          return 1;
        }
    }

    return -1;
}