#include <iostream>

float depozit1(float balance);
float retragere1(float balance);
float showbalance(float balance);

int main()
{
    float balance = 0; 
    int alegere;
   
    do {

        std::cout << "1. Balance" << std::endl;
        std::cout << "2. Depozit" << std::endl;
        std::cout << "3. Retragere" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cin >> alegere;

        switch (alegere) 
        {
            case 1:
                showbalance(balance);
                break;
            
            case 2:
               
                balance = balance + depozit1(balance);
                showbalance(balance);
                break;

            case 3:
                balance = balance - retragere1(balance);
                showbalance(balance);
                break;

            case 4:
                std::cout << "Multumim pentru ca folositi serviciile noastre!";
                return 0;
                break;
        }

    } while (alegere != 4);

    return 0;
}

float showbalance(float balance) 
{
    std::cout << "Balance: " << balance << std::endl;

    return 0;
}


float depozit1( float balance) 
{
    float depozit = 0;
    std::cout << "Suma pe care doresti sa o depozitezi: ";
    std::cin >> depozit;
    
    if (depozit < 0) 
    {
        std::cout << "Ai facut o greseala" << std::endl;
        return 0;
    }
    
    return depozit;
}

float retragere1(float balance) 
{
    float retragere = 0;

    std::cout << "Suma pe care doresti sa o retragi: ";
    std::cin >> retragere;
    
    if (retragere > balance)
    {
        std::cout << "Nu ai suficienti banii pentru a retrage!" << std::endl;
        return 0;
    }
   
    return retragere;
}