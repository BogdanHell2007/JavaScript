#include <iostream>
#include <vector>

int palindrom(std::string numar);

int main() {
    
    std::string numar ="11" ;

    int pal = palindrom(numar);

    if(pal == 1){
        std::cout << "Numarul este un APLINDROM";
    }

    if (pal == -1){
        std::cout << "Numarul nu este un PALINDROM";
    }

    return 0;
}

int palindrom(std::string numar) {
    
    std::vector<int> num1;
    std::vector<int> num2;
    
    for(int i = 0; i < numar.size(); i++){
        
        num1.push_back(numar[i]);
    }

    for(int j = numar.size() - 1; j >= 0; j--){

        num2.push_back(numar[j]);
    }

    if(num1 == num2) {

        return 1;
    }

    else {
       return -1;
    }

    
}