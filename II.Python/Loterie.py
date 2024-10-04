import random

incercare = int(0)
num = int(random.randint(1, 100))
while True:
  
 
 
  alegere = input("Vrei sa joci la loterie?")
  
  if alegere == "exit":
      break
  
  elif alegere == "play":
     
     incercare += 1
     mynum = int(input("Ghiceste numarul: "))
         
     if mynum == num:
       print("Ai ghicit din " + str(incercare) + " incercarii")
    
     if mynum != num:      
         if mynum > num:
            print("Numarul este prea mare")
            
         elif mynum < num:
           print("Numarul este prea mic")
      
         print("Numar incercari: " + str(incercare))
      
  else:
      print("Valoare necunoscuta!")