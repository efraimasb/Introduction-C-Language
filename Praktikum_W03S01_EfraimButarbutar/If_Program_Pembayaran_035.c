#include <stdio.h>
int main() {

    printf("===== Program Pembayaran =====\n");
    int total_belanja = 0;

    printf("Input total belanja:");
    scanf("%i", &total_belanja);

    // Menggunakan blok percabangan if
    if (total_belanja > 100000) {
        printf("Selamat, Anda mendapatkan hadiah! \n");
    }

    printf("Terimakasih sudah berbelanja di toko kami!\n\n");
}
