def rezolvare(name):
    inversare_name = name[::-1]
    if name == inversare_name:
        return True
    else:
        return False
    
    
        
name = input("Introdu un cuvânt sau o frază:")
rezolvare(name)
if rezolvare(name) == True:
    print(f"-> {name} <- este un palindrom")
else:
    print(f"-> {name} <- nu este un palindrom")
