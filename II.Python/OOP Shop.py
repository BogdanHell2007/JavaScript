class Item:
    rata = 0.5
    all = []
    priceall = []
    quantityall = []
   
    def __init__(self, obiect, price, quantity):
        assert price >= 0, f"Pretul {price} nu poate fi mai mic ca 0"
        assert quantity >= 0, f"Pretul {quantity} nu poate fi mai mic ca 0"
        
        self.obiect = obiect
        self.price = price
        self.quantity = quantity
        
        Item.all.append(self)
        Item.priceall.append(self)
        Item.quantityall.append(self)
          
          
    def totalPrice(self):
        return self.price * self.quantity
    
    def discount(self):
        self.price *= self.rata
        
    def __repr__(self):
        return f"Item('{self.obiect}')"
        

item1 = Item("PC", 3500, 2)
item2 = Item("Lapotop" , 2000 , 1)
item3 = Item("Mouse", 130, 1)
item4 = Item("SD Card", 64, 4)


print("Produse: ")

print(Item.all)
    
item1.totalPrice  
    
print("___________")

total = item1.totalPrice() + item2.totalPrice() + item3.totalPrice() + item4.totalPrice()
    
print("Total: " + str(total))

     


