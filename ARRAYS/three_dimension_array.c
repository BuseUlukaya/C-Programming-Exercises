/* Read the values of two 3×2 matrices from the user. Store these values in a three-dimensional array. Print to the console which value is stored at each index. */

#include <stdio.h>

int main() {
    int first_matrice[3][2];
    int second_matrice[3][2];
    int general_matrice[2][3][2];

    for(int i=0; i<3; i++) {
        for(int j=0; j<2; j++) {
            printf("Enter first_matrice[%d][%d]: ", i, j);
            scanf("%d", &first_matrice[i][j]);
        }
    }
    putchar('\n');
    for(int i=0; i<3; i++) {
        for(int j=0; j<2; j++) {
            printf("Enter second_matrice[%d][%d]: ", i, j);
            scanf("%d", &second_matrice[i][j]);
        }
    }
    putchar('\n');
    for(int i=0; i<2; i++) {
        for(int j=0; j<3; j++) {
            for(int k=0; k<2; k++) {
                if(i==0) {
                    general_matrice[i][j][k] = first_matrice[j][k];
                }
                else if(i == 1) {
                    general_matrice[i][j][k] = second_matrice[j][k];
                }
            }
        }
    }
     for(int i=0; i<2; i++) {
        for(int j=0; j<3; j++) {
            for(int k=0; k<2; k++) {
                printf("generalmatrice[%d][%d][%d]: %d ", i, j, k, general_matrice[i][j][k]);
            }
            putchar('\n');
        }
        putchar('\n');
    }


        return 0;
}

