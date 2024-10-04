#include <iostream>
#include <string>

int main()
{
    using namespace std;
    
    string confirma;
    string confirma2;
    string confirma3;
    string confirm4;
    string oras;
    string localitate;
    string nume1;
    string nume2;
    string nume3;
    string strada;
    string nr;
    char rezidenta;
    int age;
    int CNP;

    cout << "Bun venit la crearea carti dumneavostra de identitate!" << endl;
    
    cout << "Sa incepem cu Numele dumneavoastra: ";
        cin >> nume2;
    
    cout << "Prenume: ";
        cin >> nume1;

    cout << "Un al III-lea nume(daca nu aveti tastati -): ";
        cin >> nume3;


     if (nume3 == "-")
     {
         //continuarea

         cout << "Numele dumneavoastra e: " << nume2 << " " << nume1 << endl;
         
         cout << "Confirmati numele dumneavoastra?(DA sau NU): ";
         cin >> confirma;

         if (confirma == "DA")
         {
             cout << "Sa trecem mai departe:" <<endl;

             cout << "Introduceti varsta dumneavoastra: ";
             cin >> age;

             if (age >= 14) 
             {
                 cout << "Avem nevoie de rezidenta dumneavoastra! (R-Romania, U-Ukraina, S-Serbia, H-Ungaria, B-Bulgaria" << endl;
                 cout << "Va rugam sa tastati initiala rezidentei dumneavoastra: ";
                 cin >> rezidenta;

                 switch (rezidenta)
                 {
                 case 'R':
                     
                     cout << "Rezidenta -> Romania " << endl;
                     break;

                 case 'U':
                     
                     cout << "Rezidenta -> Ukraina "  << endl;
                     break;

                 case 'S':
                     cout << "Rezidenta -> Serbia" << endl;
                     break;

                 case 'H':
                     cout << "Rezidenta -> Ungaria" << endl;
                     break;

                 case 'B':
                     cout << "Rezidenta -> Bulgaria" << endl;
                     break;

                 default:
                     cout << "Nu am inteles! Avem nevoie de rezidenta dumneavoastra! (R-Romania, U-Ukraina, S-Serbia, H-Ungaria, B-Bulgaria";

                 }

                 cout << "Va rugam sa tastati Orasul si Localitatea in care locuiti!" << endl;

                 cout << "Oras: ";
                 getline(cin >> ws, oras);

                 cout << "Localitate: ";
                 getline(cin >> ws, localitate);


                 //update
                 cout << "Acum avem nevoie de adresa completa(strada si nr.)." << endl;

                 cout << "Strada: ";
                 getline(cin >> ws, strada);

                 cout << "Nr.: ";
                 getline(cin >> ws, nr);

                 cout << "Avem nevoie de confirmarea dumneavostra pentru a ne asigura ca datele dumneavoastra sunt corecte!(raspundeti cu DA sau NU)";
                 cin >> confirma2;

                 if (confirma2 == "NU")
                 {
                     cout << "Haideti sa reincepem!";
                     return 0;
                 }
                 if (confirma2 == "DA")
                 {
                     cout << "Bun! Haideti sa continuam!" << endl;

                     //update 1.2

                     cout << "Mai avem nevoie doar de CNP ul dumneavoastra pentru a finaliza procesul!";
                     cout << "CNP: " << endl;
                     cin >> CNP;

                     cout << "Perfect! Asteptati cateva momente pentru a finaliza cartea de identitate!" << endl;

                     cout << " " << endl;
                     cout << " " << endl;
                     cout << " " << endl;
                     cout << " " << endl;
                     cout << " " << endl;

                     cout << "Nume: " << nume2 << " " << nume1 << endl;

                     cout << " " << endl;

                     cout << "Varsta: " << age << endl;;

                     cout << " " << endl;

                     cout << "Rezidenta: " << rezidenta << endl;

                     cout << " " << endl;

                     cout << "Adresa1: " << "Oras " << oras << ", Loc. " << localitate << endl;
                     cout << "Adresa2: " << "Strada " << strada << ", NR. " << nr << endl;

                     cout << " " << endl;

                     cout << "CNP: " << CNP << endl;



                     cout << "Codul dumneavoastra unic: " << nume2.at(0) << age << rezidenta << strada.at(1) << nr.at(0) << endl;

                    //update 1.3
                     cout << " " << endl;
                     cout << " " << endl;
                     cout << " " << endl;
                     cout << " " << endl;
                     
                     cout << "Confirmati aceasta identitate?(DA sau NU): ";
                     cin >> confirma3;

                     if (confirma3 == "DA") 
                     {
                       
                         cout << "Va multumim ca ati ales serviciile noastre!" << endl;
                         cout << "Doriti sa ne oferiti un calificativ pentru serviciile noastre?(DA sau NU): ";
                         cin >> confirm4;

                         if (confirm4 == "DA") 
                         {
                             int calificativ;
                            
                             cout << "Alegeti de la 1-5 in functie de cate stele doriti sa acordati: ";
                             cin >> calificativ;

                             switch (calificativ) 
                             {
                                  case 1:
                                      cout << "Imi pare rau ca v am dezamagit!";
                                      break;

                                  case 2:
                                      cout << "Imi pare rau ca v am dezamagit!";
                                      break;

                                  case 3:
                                      cout << "Mai sunt loc de inbunatatiri pe platforma noastra!";
                                      break;

                                  case 4:
                                      cout << "Ne bucuram ca ati avut o experienta acceptabila cu noi!";
                                      break;

                                  case 5:
                                      cout << "Suntem foarte multumiti ca totul a mers bine! :)";
                                      break;
                             }
                         
                             return 0;
                         }
                         if (confirm4 == "NU") 
                         {
                             cout << "Sa aveti o zi buna!";
                             return 0;
                         }
                     }
                     
                     if (confirma3 == "NU") 
                     {
                         cout << "Reincepeti procesul!";
                         return 0;
                     }


                 }
             }

             //else la varsta
             if (age < 14)
             {
                 int age2;

                 age2 = 14 - age;


                 cout << "Imi pare rau dar mai trebuie sa astepti " << age2 << "Ani/An";

                 return 0;
             }

         }
         
         //aici se termina programul
         else if (confirma == "NU") 
         {
             cout << "Reincepe!";
                 return 0;
         }

     }
     else 
     {
         cout << "Numele dumneavoastra e: " << nume2 << " " << nume1 << " " << nume3 << endl;

         cout << "Confirmati numele dumneavoastra?(DA sau NU): ";
         cin >> confirma;

         if (confirma == "DA")
         {
             //continuarea
             
             cout << "Sa trecem mai departe:" << endl;

             cout << "Introduceti varsta dumneavoastra: ";
             cin >> age;

             if (age >= 14)
             {
                 cout << "Avem nevoie de rezidenta dumneavoastra! (R-Romania, U-Ukraina, S-Serbia, H-Ungaria, B-Bulgaria" << endl;
                 cout << "Va rugam sa tastati initiala rezidentei dumneavoastra: ";
                 cin >> rezidenta;

                 switch (rezidenta)
                 {
                 case 'R':
                     cout << "Rezidenta -> Romania" << endl;
                     break;

                 case 'U':
                     cout << "Rezidenta -> Ucraina" << endl;
                     break;

                 case 'S':
                     cout << "Rezidenta -> Serbia" << endl;
                     break;

                 case 'H':
                     cout << "Rezidenta -> Ungaria" << endl;
                     break;

                 case 'B':
                     cout << "Rezidenta -> Bulgaria" << endl;
                     break;

                 default:
                     cout << "Nu am inteles! Avem nevoie de rezidenta dumneavoastra! (R-Romania, U-Ukraina, S-Serbia, H-Ungaria, B-Bulgaria";
                     return 0;

                 }

                 cout << "Va rugam sa tastati Orasul si Localitatea in care locuiti!" << endl;

                 cout << "Oras: ";
                 getline(cin >> ws, oras);

                 cout << "Localitate: ";
                 getline(cin >> ws, localitate);

                 //update
                 cout << "Acum avem nevoie de adresa completa(strada si nr.).";

                 cout << "Strada: ";
                 getline(cin >> ws, strada);

                 cout << "Nr.: ";
                 getline(cin >> ws, nr);

                 cout << "Avem nevoie de confirmarea dumneavostra pentru a ne asigura ca datele dumneavoastra sunt corecte!(raspundeti cu DA sau NU)";
                 cin >> confirma2;

                 if (confirma2 == "NU")
                 {
                     cout << "Haideti sa reincepem!";
                     return 0;
                 }
                 if (confirma2 == "DA")
                 {
                     cout << "Bun! Haideti sa continuam!";

                     //update 1.2

                     cout << "Mai avem nevoie doar de CNP ul dumneavoastra pentru a finaliza procesul!" << endl;
                     cout << "CNP: ";
                     cin >> CNP;

                     cout << "Perfect! Asteptati cateva momente pentru a finaliza cartea de identitate!" << endl;

                     cout << " " << endl;
                     cout << " " << endl;
                     cout << " " << endl;
                     cout << " " << endl;
                     cout << " " << endl;

                     cout << "Nume: " << nume2 << " " << nume1 << endl;

                     cout << " " << endl;

                     cout << "Varsta: " << age << endl;

                     cout << " " << endl;

                     cout << "Rezidenta: " << rezidenta << endl;

                     cout << " " << endl;

                     cout << "Adresa1: " << "Oras " << oras << ", Loc. " << localitate << endl;
                     cout << "Adresa2: " << "Strada " << strada << ", NR. " << nr << endl;

                     cout << " " << endl;

                     cout << "CNP: " << CNP << endl;
                      
                     cout << " " << endl;

                     cout << "Codul dumneavoastra unic: " << nume2.at(0) << age << rezidenta << strada.at(1) << nr.at(0) << endl;

                     //update 1.3
                     cout << " " << endl;
                     cout << " " << endl;
                     cout << " " << endl;
                     cout << " " << endl;

                     cout << "Confirmati aceasta identitate?(DA sau NU): ";
                     cin >> confirma3;

                     if (confirma3 == "DA")
                     {

                         cout << "Va multumim ca ati ales serviciile noastre!" << endl;
                         cout << "Doriti sa ne oferiti un calificativ pentru serviciile noastre?(DA sau NU): ";
                         cin >> confirm4;

                         if (confirm4 == "DA")
                         {
                             int calificativ;

                             cout << "Alegeti de la 1-5 in functie de cate stele doriti sa acordati: ";
                             cin >> calificativ;

                             switch (calificativ)
                             {
                             case 1:
                                 cout << "Imi pare rau ca v am dezamagit!";
                                 break;

                             case 2:
                                 cout << "Imi pare rau ca v am dezamagit!";
                                 break;

                             case 3:
                                 cout << "Mai sunt loc de inbunatatiri pe platforma noastra!";
                                 break;

                             case 4:
                                 cout << "Ne bucuram ca ati avut o experienta acceptabila cu noi!";
                                 break;

                             case 5:
                                 cout << "Suntem foarte multumiti ca totul a mers bine! :)";
                                 break;

                             }

                             return 0;
                         }
                         
                         if (confirm4 == "NU")
                         {
                             cout << "Sa aveti o zi buna!";
                             return 0;
                         }
                     }
                 }
             }

             if (age < 14) 
             {
                 int age2;

                 age2 = 14 - age;
                 
                 
                 cout << "Imi pare rau dar mai trebuie sa astepti " << age2 << "Ani/An";

                 return 0;
             }

         }
         
         //aici se termina programul
         else if (confirma == "NU")
         {
             cout << "Reincepe!";
             return 0;
         }
     }

    return 0;
}