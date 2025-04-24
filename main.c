#include <stdio.h>
#include <stdlib.h>

int main() {
    int A[3][3], B[3][3];
    int i, j;

    printf("Enter elements for Matrix A (3x3):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Matrix A:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("Enter elements for Matrix B (3x3):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    printf("Matrix B:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    int C[3][3];
    printf("Matrix Addition (A + B):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            C[i][j] = A[i][j] + B[i][j];
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    int D[3][3];
    printf("Matrix Subtraction (A - B):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            D[i][j] = A[i][j] - B[i][j];
            printf("%d ", D[i][j]);
        }
        printf("\n");
    }

    int E[3][3];
    printf("Matrix Multiplication (A * B):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            for(int k = 0; k < 3; k++) {
                E[i][j] += A[i][k] * B[k][j];
            }
            printf("%d ", E[i][j]);
        }
        printf("\n");
    }

    float F[3][3];
    printf("Element-wise Division (A / B):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(B[i][j] != 0)
                F[i][j] = (float)A[i][j] / B[i][j];
            else {
                F[i][j] = 0.0;
                printf("Div by 0! ");
                continue;
            }
            printf("%.2f ", F[i][j]);
        }
        printf("\n");
    }

    return 0;
}
