#ifndef _HADAMAR_H                   /* pour l'inclusion conditionnelle */
#define _HADAMAR_H

#define MAX 100

void afficherMatrice(int matrice[100][100], int tailleMatrice);
int correctionNbUtilisateur(int nbUtilisateur);
void creationMatrice(int matrice[MAX][MAX],int indiceRecursivite, int nbUtilisateur);
void sequenceEtalement();
void emetteur();

#endif