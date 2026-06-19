#include <stdio.h>
int main(){
    // Program untuk menjumlahkan dan mengurangkan dua angka
    int x, y, hasil, sisa;
    printf("Masukkan angka pertama: ");
    scanf("%d", &x);
    printf("Masukkan angka kedua: ");
    scanf("%d", &y);

    // Melakukan operasi penjumlahan dan pengurangan
    hasil = x/y;
    sisa = x%y;
    printf("%d/%d = %d\n", x, y, hasil, sisa);
    return 0;
}