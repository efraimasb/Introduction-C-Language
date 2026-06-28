#include <stdio.h>
int main(){
	//Deklarasi String 
	char str[50];
	//Membaca String
	puts("Masukkan nama Anda :");
	fgets(str, sizeof str, stdin);
	//Mencetak string
	printf("Nama anda adalah %s", &str);
	return 0;
}
