#include <stdio.h>
#include <stdlib.h>

int main() {

    // Kamus
    int i[3], j[3];
    int k;
    int s = 0;

    // Input vektor i
    printf("Masukkan komponen vektor i (i1 i2 i3):\n");
    for(k = 0; k < 3; k++) {
        printf("i%d = ", k + 1);
        scanf("%d", &i[k]);
    }

    // Input vektor j
    printf("\nMasukkan komponen vektor j (j1 j2 j3):\n");
    for(k = 0; k < 3; k++) {
        printf("j%d = ", k + 1);
        scanf("%d", &j[k]);
    }

    // Menghitung perkalian skalar (Dot Product)
    for(k = 0; k < 3; k++) {
        s = s + (i[k] * j[k]);
    }

    // Menampilkan proses perhitungan
    printf("\nPerhitungan:\n");
    printf("s = (%d x %d) + (%d x %d) + (%d x %d)\n",
           i[0], j[0],
           i[1], j[1],
           i[2], j[2]);

    // Menampilkan hasil
    printf("s = %d\n", s);

    system("PAUSE");
    return 0;
}