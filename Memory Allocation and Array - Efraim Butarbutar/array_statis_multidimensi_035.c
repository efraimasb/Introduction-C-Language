#include <stdio.h>
#include <stdlib.h>

int main() {

    // Kamus
    int A[2][2];
    int B[2][2];
    int C[2][2];
    int i, j;

    // Input matriks A
    printf("Masukkan elemen Matriks A (2x2):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Input matriks B
    printf("\nMasukkan elemen Matriks B (2x2):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    // Penjumlahan matriks
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Menampilkan hasil
    printf("\nHasil Penjumlahan Matriks:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    system("PAUSE");
    return 0;
}