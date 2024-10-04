#include <iostream>
#include <cmath>

int main()
{
    using namespace std;

    int operator1;
    float a;
    float b;
    float c;

    cout << " b = 00 pt. radical, a = R, b = R pt.restul calculelor " << endl;
    
    cout << "A: ";
        cin >> a;
    
    cout << "B: ";
        cin >> b;
    
        if (b == 0)
        {
            cout << sqrt(a);
        }
        else 
        {
            
            cout << "Alege un operator de la 1-5 (+, -, * , /, RLP): ";
            cin >> operator1;

            switch (operator1)
            {
            case 1:
                cout << a + b;

                break;

            case 2:
                cout << a - b;

                break;

            case 3:
                cout << a * b;

                break;

            case 4:
                cout << a / b;

                break;

            case 5:
                cout << pow(a, b);

                break;

            default:
                cout << "Imi pare rau operatorul ales de tine nu este recunoscut!";
            }  
        }
}