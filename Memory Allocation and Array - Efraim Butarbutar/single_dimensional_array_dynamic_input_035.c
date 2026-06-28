#include <stdio.h>
#include <stdlib.h>

int main() {

    // Kamus
    int i;
    int *a;
    int sz;

    // Input ukuran array
    printf("Masukkan jumlah elemen array: ");
    scanf("%d", &sz);

    // Alokasi memori dinamis
    a = (int *)malloc(sz * sizeof(int));

    // Mengecek apakah alokasi memori berhasil
    if (a == NULL) {
        printf("Alokasi memori gagal!\n");
        return 1;
    }

    // Input elemen array
    printf("\nMasukkan %d elemen array:\n", sz);

    for (i = 0; i < sz; i++) {
        printf("Elemen ke-%d : ", i + 1);
        scanf("%d", &a[i]);
    }

    // Menampilkan isi array
    printf("\nIsi array adalah:\n");

    for (i = 0; i < sz; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }

    // Membebaskan memori
    free(a);

    system("PAUSE");
    return 0;
}