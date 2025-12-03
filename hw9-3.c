#include<stdio.h>

#define MATRIX_NB_LINE 2
#define MATRIX_NB_COL 3

void print_float(float x) {
    if ((int) x == x)
        printf("%d", (int)x);
    else
        printf("%.1f", x);
}

int main() {
    float a[MATRIX_NB_LINE][MATRIX_NB_COL];
    float b[MATRIX_NB_COL][MATRIX_NB_LINE];

    //first matrix input
    for(int i = 0; i < MATRIX_NB_LINE; i++) {
        for(int j = 0; j < MATRIX_NB_COL; j++) {
            scanf("%f", &a[i][j]);
        }
    }

    //second matrix input
    for(int i = 0; i < MATRIX_NB_COL; i++) {
        for(int j = 0; j < MATRIX_NB_LINE; j++) {
            scanf("%f", &b[i][j]);
        }
    }

    //first matrix display
    printf("The first matrix you entered is\n");
    for(int i = 0; i < MATRIX_NB_LINE; i++) {
        for(int j = 0; j < MATRIX_NB_COL; j++) {
            print_float(a[i][j]);
            printf(" ");
        }

        printf("\n");
    }

    //second matrix display
    printf("The second matrix you entered is\n");
    for(int i = 0; i < MATRIX_NB_COL; i++) {
        for(int j = 0; j < MATRIX_NB_LINE; j++) {
            print_float(b[i][j]);
            printf(" ");
        }

        printf("\n");
    }

    printf("The multiplication product of matrix A and matrix B :\n");
    for(int i = 0; i < MATRIX_NB_LINE; i++) {
        for(int j = 0; j < MATRIX_NB_LINE; j++) {

            float coeff = 0;
            for(int k = 0; k < MATRIX_NB_COL; k++) {
                coeff += a[i][k] * b[k][j];
            }

            print_float(coeff);
            printf(" ");
        }

        printf("\n");
    }
}
