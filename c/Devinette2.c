#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	int continuer = 1;
	while(continuer) {

		printf("Bienvenue au jeu de devinette !\n");
		int Aleatoire = 0;
		int nombreEntree;
		int Trouver = 0;

		const int MAX = 100, MIN = 1;
		srand(time(NULL));
		Aleatoire = rand() % (MAX + MIN);
		printf("Je pense a un nombre entre 1 et 100. Essayez de le deviner en max 8 tentatives !.\n");

	
		for (int i = 1; i <= 8; i++) {
			printf("Quel est le nombre ?");
        		printf("Tentative %d : ", i);
        		scanf("%d", &nombreEntree);

        		if (nombreEntree == Aleatoire) {
				printf("Bravo, vous avez trouve %d en %d essais \n", Aleatoire, i);
				Trouver = 1;
				breack;
			} else if (nombreEntree < Aleatoire) {
				printf("Le nombre est plus grand que %d\n", nombreEntree);
			} else {
				printf("Le nombre est plus petit que %d\n", nombreEntree);  }
		}
		
		if (!Trouver) {
			printf("Perdu !!!Vous avez depasser les 8 tentatives autorisees. le nombre etait %d\n", Aleatoire); }

		printf("Vouler-vous continuer ? (1 = OUI, 0 = NON)
		scanf ("%d", &continuer);

		printf("Merci d'avoir joué au jeu de devinette! Au revoir.);
		return 0;
}