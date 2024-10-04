#include <iostream>

int main()
{
    using namespace std;

    float temperatura;
    char typeTemp;
    float rez;
    float Kelvin = 273.15;

    cout << "Alege temperatura: "; 
         cin >> temperatura;
    cout << "Vrei sa calculezi T sau t ?";
          cin >> typeTemp;

          switch (typeTemp) 
          {
             case 'T':
                 rez = temperatura + Kelvin;
                 
                 cout << "T = " << rez;

                 break;

             case 't':
                 rez = temperatura - Kelvin;

                 cout << "t = " << rez;

                 break;

             default:
                 cout << "Nu am inteles!";
                 
          }

          return 0;
}