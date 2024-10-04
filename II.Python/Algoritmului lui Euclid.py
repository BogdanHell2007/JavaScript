a = int(input("Introdu a: "))
b = int(input("Introdu b:"))

while b != 0:
    rez = a % b
    a = b
    b = rez
    if b == 0:
        print(f"GDC = {a}")

          
   