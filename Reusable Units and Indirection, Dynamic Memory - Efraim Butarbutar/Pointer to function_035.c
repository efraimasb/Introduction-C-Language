//Efraim Asidovanio Butarbutar
//14S21035
#include <stdio.h>

void main(){
    // Variabel
    int umur = 19;
    float tinggi = 175.6;

    // Pointer
    int *pointer_umur = &umur;
    int *pointer2 = &umur;
    float *p_tinggi = &tinggi;

    // menampilkan alamat memori variabel
    printf("Alamat memori variabel 'umur' = %d\n", &umur);
    printf("Alamat memori variabel 'tinggi' = %d\n\n", &tinggi);
    
    // menampilkan referensi alamat memori pointer
    printf("Referensi alamat memori *pointer_umur = %d\n", pointer_umur);
    printf("Referensi alamat memori *pointer2 = %d\n", pointer2);
    printf("Referensi alamat memori *p_tinggi = %d\n\n", p_tinggi);

    // manampilkan alamat memori pointer
    printf("Alamat memori *pointer_umur = %d\n", &pointer_umur);
    printf("Alamat memori *pointer2 = %d\n", &pointer2);
    printf("Alamat memori *p_tinggi = %d\n", &p_tinggi);
}
