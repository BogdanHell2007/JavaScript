#include <iostream>
#include <vector>

int main() {

    std::vector<int> numbers = {1, 4, 6};
    int total = 0;
    int mynum = 10;

    for(int i = 0; i < numbers.size(); i++){
        
        for(int j = 0; j < numbers.size(); j++){

            total = numbers[i] + numbers[j];

            if(total == mynum){
                
                std::cout << "index: " << i << "," <<  j << std::endl;
            }
        }
    }

    return 0;
}