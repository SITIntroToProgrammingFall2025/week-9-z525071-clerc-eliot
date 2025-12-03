#include<stdio.h>

#define MATRIX_SIZE 3

int main() {
    int matrix[MATRIX_SIZE][MATRIX_SIZE];

    for(int i = 0; i < MATRIX_SIZE; i++) {
        for(int j = 0; j < MATRIX_SIZE; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("You entered\n");

    for(int i = 0; i < MATRIX_SIZE; i++) {
        for(int j = 0; j < MATRIX_SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }

        printf("\n");
    }

    printf("Output\n");

    for(int i = 0; i < MATRIX_SIZE; i++) {
        for(int j = MATRIX_SIZE - 1; j >= 0; j--) {
            printf("%d ", matrix[i][j]);
        }

        printf("\n");
    }
}


