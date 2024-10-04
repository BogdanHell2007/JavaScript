class Activ:
    def __init__(self, element, categorie, subcategorie, subgrupa): 
        
        self.element = element
        self.categorie = categorie
        self.subcategorie = subcategorie
        self.subgrupa = subgrupa

    def Rezultat(self):
        print(f"elementul {self.element} --> {self.categorie} --> {self.subcategorie} --> {self.subgrupa}")
    
def Dictionar_de_elemente(element_name):
    assets = {
        'cheltuieli de constituire': Activ('cheltuieli de constituire', 'active imobilizate', 'gol', 'gol'),
        'cheltuieli de cercetare si dezvoltare':Activ('cheltuieli de cercetare si dezvoltare', 'active imobilizate', 'gol', 'gol')
    }
      

    if element_name in assets:
        assets[element_name].Rezultat()
        
    else:
        print(f"Elementul {element_name} nu a fost gasit in lista!")
      
     


if __name__ == "__main__":
    elemente_input = input("Introdu activul: ").lower()
    Dictionar_de_elemente(elemente_input)
    