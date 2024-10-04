def temp_fahrenhait(temperatura):
    fahrenheit = int(0)
    fahrenheit = (temperatura * (9/5)) + 32
    print("Temperatura în Fahrenheit: " + str(fahrenheit))
    
def temp_celsius(temperatura):
    celsius = int(0)
    celsius = (temperatura - 32)  * (5/9)
    print("Temperatura în Celsius:" + str(celsius))

temperatura = int(input("Introdu temperatura: "))
alegere = input("Alege conversia (C -> F sau F -> C):")
if alegere == 'C':
    temp_celsius(temperatura)
elif alegere == 'F':
    temp_fahrenhait(temperatura)
else:
    print("Valoare necunoscuta!")