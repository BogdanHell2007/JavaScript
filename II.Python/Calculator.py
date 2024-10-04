while True:
    total = 0
    a = int(input("Numar #1: "))
    alegere = input("Alege operația (+, -, *, /): ")
    b = int(input("Numar #2: "))
 
    if alegere == 'e':
      break
   
    if alegere == '+':
      total = a + b
      print("|")
      print("Rezultat: " + str(total))
      print(" ")
    
    elif alegere == '-':
      total = a - b
      print("|")
      print("Rezultat: " + str(total))
      print(" ")
        
    elif alegere == '*':
      total = a * b
      print("|")
      print("Rezultat: " + str(total))
      print(" ")
    
    elif alegere == '/':
      total = a / b
      print("|")
      print("Rezultat: " + str(total))
      print(" ")
      

