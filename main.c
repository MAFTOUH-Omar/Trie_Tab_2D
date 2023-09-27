#include <stdio.h>

// Fonction pour afficher la matrice
void afficherMatrice(int matrice[][2], int lignes) {
    for (int i = 0; i < lignes; i++) {
        printf("%d\t%d\n", matrice[i][0], matrice[i][1]);
    }
}

// Fonction pour trier la matrice en utilisant des boucles et des pointeurs
void trierMatrice(int matrice[][2], int lignes) {
    for (int i = 0; i < lignes - 1; i++) {
        for (int j = 0; j < lignes - i - 1; j++) {
            if (*(matrice[j]) > *(matrice[j + 1])) {
                // changer les lignes si la première valeur est plus grande
                int* temp = matrice[j];
                matrice[j] = matrice[j + 1];
                matrice[j + 1] = temp;
            }
        }
    }
}

int main() {
    int matrice[][2] = {{5, 10}, {2, 7}, {8, 3}, {1, 12}};
    int lignes = sizeof(matrice) / sizeof(matrice[0]);

    printf("Matrice avant le tri :\n");
    afficherMatrice(matrice, lignes);

    trierMatrice(matrice, lignes);

    printf("\nMatrice après le tri :\n");
    afficherMatrice(matrice, lignes);

    return 0;
}
