import calc
print(__name__)
if __name__ == "__main__":
    giusto = False
    choice = 0
    while(giusto == False):
        choice = input("1 = addizione, 2 = sottrazione, 3 = moltiplicazione, 4 = divisione\nFai la tua scelta:")
        if(choice == '1'):
            giusto = True
            num1 = input("inserisci il primo numero: ")
            num2 = input("inserisci il secondo numero: ")
            num1 = int(num1)
            num2 = int(num2)
            print("la somma è: ", calc.add(num1, num2))
        elif(choice == '2'):
            giusto = True
            num1 = input("inserisci il primo numero: ")
            num2 = input("inserisci il secondo numero: ")
            num1 = int(num1)
            num2 = int(num2)
            print("la differenza è: ", calc.sub(num1, num2))
        elif(choice == '3'):
            giusto = True
            num1 = input("inserisci il primo numero: ")
            num2 = input("inserisci il secondo numero: ")
            num1 = int(num1)
            num2 = int(num2)
            print("il prodotto è: ", calc.mul(num1, num2))
        elif(choice == '4'):
            giusto = True
            num1 = input("inserisci il primo numero: ")
            num2 = input("inserisci il secondo numero: ")
            num1 = int(num1)
            num2 = int(num2)
            print("il quoziente è: ", calc.div(num1, num2))
        else:
            print("scegli tra le quattro opzioni.")

