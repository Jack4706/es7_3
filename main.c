#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define R 5
#define C 7
#define MIN 1
#define MAX 10

void printMatrix(int m[][C], int row, int col);

void printArray(int a[], int n);

int main(void) {
    int matrix[R][C];
    int somma[R];
    srand(time(NULL));

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            matrix[i][j] = rand() % (MAX - MIN) + MIN;
        }
    }

    printMatrix(matrix, R, C);

    printf("\n");

    for (int i = 0; i < R; i++) {
        somma[i] = 0;
    }

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            somma[i] += matrix[i][j];
        }
    }

    printArray(somma, R);

    return 0;
}

void printMatrix(int m[][C], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

void printArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("somma riga %d: %d\n", i + 1, a[i]);
    }
}
