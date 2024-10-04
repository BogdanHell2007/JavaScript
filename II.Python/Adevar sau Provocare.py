
import random

def provocare():  
    num = int(random.randint(1, 5))
    if num == 1:
        print("Te provoc sa iei zece la urmatorul test de matematica")
    elif num == 2:
        print("Te provoc sa inveti python")
    elif num == 3:
        print("te provoc sa iti distrugi telefonul")
    elif num == 4:
        print("Te provoc sa mananci castraveti cu mustar")
        
    
def adevar():
    num2 = int(random.randint(1, 5))
    if num2 == 1:
        print("Este adevarat ca esti obsedat de telefon?")
    elif num2 == 2:
        print("Este adevarat ca nu iti plac dulciurile?")  
    elif num2 == 3:
        print("Este adevarat ca nu esti bun la matematica?")
    elif num2 == 4:
        print("Este adevarat ca esti sarac?")
    elif num2 == 5:
        print("Este adevarat ca nu sti sa faci nimic?")
        
    




alegere = input("p(Provocare) sau a(Adevar): ")

if alegere == 'p':
    provocare()
    
elif alegere == 'a':
    adevar()
    
else:
    print("Nu cunoastem valoarea!")
    

    
 





    




    
