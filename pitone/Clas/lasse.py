class Persona:
    def __init__(self, Nome, Cognome):
        self.Nome = Nome
        self.Cognome = Cognome
    def Saluto(self):
        print("Ciao, %s %s!", self.Nome, self.Cognome)

tizio = Persona("Franz", "Zosky")
print(tizio.Saluto())