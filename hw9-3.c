#include<stdio.h>

#define MATRIX_NB_LINE 2
#define MATRIX_NB_COL 3

int main() {
    int a[MATRIX_NB_LINE][MATRIX_NB_COL];
    int b[MATRIX_NB_COL][MATRIX_NB_LINE];

    //first matrix input
    for(int i = 0; i < MATRIX_NB_LINE; i++) {
        for(int j = 0; j < MATRIX_NB_COL; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    //second matrix input
    for(int i = 0; i < MATRIX_NB_COL; i++) {
        for(int j = 0; j < MATRIX_NB_LINE; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    //first matrix display
    printf("The first matrix you entered is\n");
    for(int i = 0; i < MATRIX_NB_LINE; i++) {
        for(int j = 0; j < MATRIX_NB_COL; j++) {
            printf("%d ", a[i][j]);
        }

        printf("\n");
    }

    //second matrix display
    printf("The second matrix you entered is\n");
    for(int i = 0; i < MATRIX_NB_COL; i++) {
        for(int j = 0; j < MATRIX_NB_LINE; j++) {
            printf("%d ", b[i][j]);
        }

        printf("\n");
    }

    printf("The multiplication product of matrix A and matrix B :\n");
    for(int i = 0; i < MATRIX_NB_LINE; i++) {
        for(int j = 0; j < MATRIX_NB_LINE; j++) {

            int coeff = 0;
            for(int k = 0; k < MATRIX_NB_COL; k++) {
                coeff += a[i][k] * b[k][j];
            }

            printf("%d ", coeff);
        }

        printf("\n");
    }
}


