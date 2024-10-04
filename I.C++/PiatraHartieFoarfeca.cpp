#include <iostream>

std::string alegerePC(int alegere2);

int main()
{
    
    int alegere;
    int alegere2;

    std::cout << "1. Play" << std::endl;
    std::cout << "2. Exit" << std::endl;
    std::cin >> alegere;
    
    do {
        switch (alegere)
        {
        
        case 1:
            std::cout << " " << std::endl;
            std::cout << " " << std::endl;
            std::cout << "PIATRA , HARTIE sau FOARFECA? (4, 5, 6): ";
            std::cin >> alegere2;

            switch (alegere2)
            {
            case 4:
                std::cout << "Alegerea ta: " "Piatra" << std::endl;
                std::cout << alegerePC(alegere2);
                break;

            case 5:
                std::cout << "Alegerea ta: " "Hartie" << std::endl;
                std::cout << alegerePC(alegere2);
                break;

            case 6:
                std::cout << "Alegerea ta: " "Foarfeca" <<std::endl;
                std::cout << alegerePC(alegere2);
                break;

            default:
                std::cout << "Doar 4, 5 sau 6!" << std::endl;
                break;
            }

        }

    } while (alegere != 2);

    return 0;
}

std::string alegerePC(int alegere2)
{
    srand(time(NULL));

    int num = (rand() % 3) + 1;
    std::string win = "WIN!";
    std::string lose = "Ai pierdut!";
    std::string egal = "Egalitate!";

    //piatra 
    
    if (num == 1)
    {
        std::cout << "Calculator: Piatra" << std::endl;
       
        if (alegere2 == 4) return egal;
        if (alegere2 == 5) return egal;
        if (alegere2 == 6) return lose;
        
    }

    //hartie 

    if (num == 2)
    {
        std::cout << "Calculator: Hartie" << std::endl;
       
        if (alegere2 == 5) return egal;
        if (alegere2 == 6) return win;
        if (alegere2 == 4) return lose;
       

    }

    //foarfeca 

    if (num == 3)
    {
        std::cout << "Calculator: Foarfeca" << std::endl;

        if (alegere2 == 6) return egal;
        if (alegere2 == 4) return win;
        if (alegere2 == 5) return lose;
        
    }

    return "Eroare!";
}