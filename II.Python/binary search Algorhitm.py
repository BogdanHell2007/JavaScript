array = [2, 5, 8, 12, 16, 23, 38, 45, 56, 72]
mynum = int(input("Cauta un numar: "))

#partea stanga

if array[4] > mynum:    
    if array[3] > mynum:      
        if array[2] > mynum:           
            if array[1] > mynum:
                print("Index 0")
                if array[0] != mynum:
                   print("Nu exista in baza de date!")            
            elif array[1] == mynum:
                print("Index 1")                
        elif array[2] == mynum:
            print("Index 2")            
    elif array[3] == mynum:
        print("Index 3")
elif array[4] == mynum:
    print("Index 4")
    
#partea dreapta    

elif array[4] < mynum:
    if array[5] < mynum:
        if array[6] < mynum:
            if array[7] < mynum:
                if array[8] < mynum:                    
                    if array[9] != mynum:
                        print("Nu exista in baza de date!")
                    else:
                        print("Index 9")
                elif array[8] == mynum:
                    print("Index 8")
            elif array[7] == mynum:
                print("Index 7")
        elif array[6] == mynum:
            print("Index 6")
    elif array[5] == mynum:
        print("Index 5")