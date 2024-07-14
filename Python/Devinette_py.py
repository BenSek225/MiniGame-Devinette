import numpy as np


print(" Bienvenue au jeux de devinette")
print(" ")
nbAleatoire = 0
i = 0
nbEntree = 0

nbAleatoire = int(np.random.random() * 1e2)
print("Je pense a un nombre entre 1 et 100. Essayez de le deviner en max 8 tentatives !.")
print("    ")
for i in [1,2,3,4,5,6,7,8]:
    nbEntree = int ( input ("Quel est le nombre ? "))
    if (nbEntree == nbAleatoire):
        print("Bravo, vous avez trouvé ", nbAleatoire," en ", i, "essais.")
        print(" ")
        break
    elif (nbEntree < nbAleatoire):
        print("Le nombre est plus grand que ", nbEntree)
        print(" ")
    else :
        print("Le nombre est plus petit que", nbEntree)
        print(" ")
if (i == 8):
    print("Perdu !!! Vous avez depasser les 8 tentatives autorisees. le nombre était ", nbAleatoire)
    print(" ")

