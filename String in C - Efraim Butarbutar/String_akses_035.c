#include <stdio.h>
#define MAKS 256
int main (){
	int i;
	int jumlah_karakter = 0;
	char teks[MAKS];
	puts("Masukkan suatu kalimat (maksimal 255 karakter)");
	puts("Saya akan menghitung jumlah karakternya.\n");
	fgets(teks, sizeof teks, stdin);
	for(i=0; teks[i]!='\0'; i++)
	jumlah_karakter++;
	printf("\nJumlah karakter = %d\n", jumlah_karakter);
}
