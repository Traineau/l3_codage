#include <stdio.h>
#include <stdlib.h>
#include "hadamar.h"

void afficherMatrice(int matrice[100][100], int tailleMatrice){
    int i, j;

    for (i = 0; i < tailleMatrice; i++) {
        for (j = 0; j < tailleMatrice; j++) {
            printf("%4d", matrice[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}


int correctionNbUtilisateur(int nbUtilisateur){ // Si on a par exemple 3 utilisateurs, fait une matrice 4 * 4
	int tailleMatrice = 1;
	while(tailleMatrice < nbUtilisateur){
		tailleMatrice *= 2;
	}
	return tailleMatrice;
}

void creationMatrice(int matrice[MAX][MAX],int indiceRecursivite, int tailleMatrice){
	int i, j, k;

    if (indiceRecursivite < tailleMatrice) {
        for (i = 0; i < indiceRecursivite; i++) {
            for (j = 0; j < indiceRecursivite; j++) {
                matrice[i + indiceRecursivite][j] = matrice[i][j];
                matrice[i][j + indiceRecursivite] = matrice[i][j];
                matrice[i + indiceRecursivite][j + indiceRecursivite] = -matrice[i][j];
            }
        }
        creationMatrice(matrice, 2*indiceRecursivite, tailleMatrice); // Recursivité
    }
}

void sequenceEtalement(int tailleMessage, int tailleMatrice, int nbUtilisateur, int sequence[][], int message[], int matrice[][] ){
  	int i, j, k;

  	printf("tailleMessage : %i || tailleMatrice : %i || nbUtilisateur : %i\n ", tailleMessage,tailleMatrice,nbUtilisateur);
  	for(i = 0 ; i < nbUser ; i++){
    	for(j = 0 ; j < taille ; j++){
     		for(k = 0 ; k < tailleH ; k ++){

	        	if(message[j] == 1){
					sequence[i][(j*4)+k] = hadamard[i][k];

	        	}else  if(message[j] == 0){
	          		sequence[i][(j*4)+k] = -hadamard[i][k];
	        	}
	        }
      	}
     }
  	for(i = 0 ; i < nbUser ; i++){
    	for(j = 0 ; j < nbUser*tailleH ; j++){
      		printf("%3i", sequence[i][j]);
    	}
    	printf("\n");
  	}
}

void emetteur(matrice[][], message[][],int tailleMessage, int tailleMatrice, int nbUtilisateur){

  	int sequence[nbUtilisateur][nbUtilisateur*tailleMatrice];
  	sequenceEtalement(tailleMessage, tailleMatrice, nbUtilisateur, sequence, message, matrice );
}
