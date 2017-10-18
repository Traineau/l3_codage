#include <stdio.h>
#include <stdlib.h>
#include "hadamar.h"

int main(){
	int message[5] = {1, 3, 5, 4, 2};
	int nombreUtilisateur, tailleMatrice;
	int indiceRecursivite = 1;

	printf("Bonjour, entrez un nombre d'utilisateur \n");
	scanf("%i", &nombreUtilisateur);

	tailleMatrice = correctionNbUtilisateur(nombreUtilisateur);

	printf("Nombre d'utilisateurs : %i \n", nombreUtilisateur);
	printf("Taille de la matrice : %i \n", tailleMatrice);

	int matrice[tailleMatrice][tailleMatrice];
    matrice[0][0] = 1;

	creationMatrice(matrice, indiceRecursivite, tailleMatrice);
	afficherMatrice(matrice, tailleMatrice);

	return 1;
}