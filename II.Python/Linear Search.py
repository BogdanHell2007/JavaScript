def seartcharray(list, number):
    for i in range(len(array)):
      if list[i] == number:
        return i
        
   
    return -1


array = [1, 40, 60, 67, 80]

mynum = int(input("Cauta un numar: "))

index = seartcharray(array, mynum)

if index != -1:
    print(f"elementul {mynum} se afla la index-ul {index}")  
else:
    print("Elementul nu se afla in array!") 
            
            