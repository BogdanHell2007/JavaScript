#include <iostream>

int main() {
    
    std::string CD;

    int incepe;
    int margine;
    int r;
    int q;
    char alegere;

   std::cout << "Q sau R? ";
   std::cin >> alegere;

    switch (alegere)
    {
       case 'R':
        std::cout << "Crescator sau descrescator?";
        std::cin >> CD;

        if (CD == "Crescator")
        {
            std::cout << "De unde incepe progresia: ";
            std::cin >> incepe;

            std::cout << "Unde va fi mnarginea: ";
            std::cin >> margine;

            std::cout << "Ratia: ";
            std::cin >> r;
            
            
            if (margine < incepe)
            {
                std::cout << "Imi pare rau dar MARGINEA trebuie sa fie mai mica decat INCEPUTUL";

                return 0;
            }

            for (int x = incepe; x <= margine; x += r)
            {

                std::cout << x << std::endl;
            }
        }

        if (CD == "Descrescator")
        {
           
            std::cout << "De unde incepe progresia: ";
            std::cin >> incepe;

            std::cout << "Unde va fi mnarginea: ";
            std::cin >> margine;

            std::cout << "Ratia: ";
            std::cin >> r;
            
            
            if (margine > incepe)
            {
                std::cout << "Imi pare rau dar MARGINEA trebuie sa fie mai mica decat INCEPUTUL";

                return 0;
            }


            for (int x = incepe; x >= margine; x -= r)
            {

                std::cout << x << std::endl;
            }
        }
     
        break;

       case 'Q':
           
           std::cout << "Crescator sau descrescator?";
           std::cin >> CD;

           if (CD == "Crescator")
           {
               std::cout << "De unde incepe progresia: ";
               std::cin >> incepe;

               std::cout << "Unde va fi mnarginea: ";
               std::cin >> margine;

               std::cout << "Ratia: ";
               std::cin >> q;


               if (margine < incepe)
               {
                   std::cout << "Imi pare rau dar MARGINEA trebuie sa fie mai mica decat INCEPUTUL";

                   return 0;
               }

               for (int x = incepe; x <= margine; x *= q)
               {

                   std::cout << x << std::endl;
               }
           }

           if (CD == "Descrescator")
           {

               std::cout << "De unde incepe progresia: ";
               std::cin >> incepe;

               std::cout << "Unde va fi mnarginea: ";
               std::cin >> margine;

               std::cout << "Ratia: ";
               std::cin >> q;


               if (margine > incepe)
               {
                   std::cout << "Imi pare rau dar MARGINEA trebuie sa fie mai mica decat INCEPUTUL";

                   return 0;
               }


               for (int x = incepe; x >= margine; x /= q)
               {

                   std::cout << x << std::endl;
               }

           }

           break;

       defaul:
           std::cout << "Nu am inteles!";

           return 0;    
    }
    
    return 0;
}