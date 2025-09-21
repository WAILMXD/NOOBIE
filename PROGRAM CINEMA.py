
   age = int(input("entrer votre age "))
        if (age >= 18):
            pto = 12
        else:
            pto = 7
    pop = input("voulez vous du pop corn ?")
    if(pop == "oui"):
        pto = pto+5
    else:
        pto = pto
    print("votre tiquet vaut :", pto, "€")
