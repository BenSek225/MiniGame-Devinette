#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int continuer = 1;
	while (continuer) {

		printf("Bienvenue au jeu de devinette !\n");
		int Aleatoire = 0;
		int Tentatives = 0;
		int nombreEntree;
		int Trouver = 0;
	
		const int MAX = 100, MIN = 1;
		srand(time(NULL));
		Aleatoire = rand() % (MAX + MIN);
		printf("J'ai choisi un nombre entre 1 et 100. A toi de le deviner en un maximum de 8 tentatives !\n ");

		do{
			Tentatives ++ ;
			printf(" Quel est le nombre ? ");
			scanf("%d",&nombreEntree);

			if(Aleatoire > nombreEntree){
				printf("Encore plus grand !");
			} else if (Aleatoire < nombreEntree){
				printf("Encore plus petit !");
			} else {
				Trouver = 1;
				break ; }
		} while(Tentatives < 8);

		if(Trouver == 1){
			printf("Bravo ! Vous avez trouver %d en %d essais", Aleatoire, Tentatives);
		} else {
			printf("Perdu !!! Vous avez depasser les 8 tentatives autorisees. Le nombre etait: %d.", Aleatoire);
		}
		
		printf("Voulez-vous rejouer ? (1 pour OUI, 0 pour NON) ");
		scanf("%d", &continuer);

		printf("\n");
	}
	printf(" Merci d'avoir joué au jeu de devinette ! Au revoir.\n")
	return 0;
}