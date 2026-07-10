#include <stdio.h>
//Program that adds the elements of two matrices.
int main() {
    int n;
    int p;

    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter p: ");
    scanf("%d", &p);

    int first_matrice[n][p];
    int second_matrice[n][p];
    int sum_matrice[n][p];

    for(int i=0; i<n; i++) {
        for(int j=0; j<p; j++) {
            printf("Enter first_matrice[%d][%d]: ", i, j);
            scanf("%d", &first_matrice[i][j]);
        }
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<p; j++) {
            printf("Enter second_matrice[%d][%d]: ", i, j);
            scanf("%d", &second_matrice[i][j]);
        }
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<p; j++) {
            sum_matrice[i][j] = first_matrice[i][j] + second_matrice[i][j];
        }
    }
    printf("Sum matrice: \n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<p; j++) {
            printf("%4d ", sum_matrice[i][j]);
        }
        printf("\n");
    }
        return 0;
}

