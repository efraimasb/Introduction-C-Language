#include <stdio.h>
#include <stdlib.h>

int main() {

    // Kamus
    int **A, **B, **C;
    int baris, kolom;
    int i, j;

    // Input ukuran matriks
    printf("Masukkan jumlah baris : ");
    scanf("%d", &baris);

    printf("Masukkan jumlah kolom : ");
    scanf("%d", &kolom);

    // Alokasi memori untuk matriks A, B, dan C
    A = (int **)malloc(baris * sizeof(int *));
    B = (int **)malloc(baris * sizeof(int *));
    C = (int **)malloc(baris * sizeof(int *));

    for(i = 0; i < baris; i++) {
        A[i] = (int *)malloc(kolom * sizeof(int));
        B[i] = (int *)malloc(kolom * sizeof(int));
        C[i] = (int *)malloc(kolom * sizeof(int));
    }

    // Input Matriks A
    printf("\nMasukkan elemen Matriks A:\n");
    for(i = 0; i < baris; i++) {
        for(j = 0; j < kolom; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Input Matriks B
    printf("\nMasukkan elemen Matriks B:\n");
    for(i = 0; i < baris; i++) {
        for(j = 0; j < kolom; j++) {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    // Penjumlahan Matriks
    for(i = 0; i < baris; i++) {
        for(j = 0; j < kolom; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Menampilkan hasil
    printf("\nHasil Penjumlahan Matriks:\n");
    for(i = 0; i < baris; i++) {
        for(j = 0; j < kolom; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    // Membebaskan memori
    for(i = 0; i < baris; i++) {
        free(A[i]);
        free(B[i]);
        free(C[i]);
    }

    free(A);
    free(B);
    free(C);

    system("PAUSE");
    return 0;
}