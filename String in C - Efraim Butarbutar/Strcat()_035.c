#include <stdio.h>
int main (){
	char nama[] = "Febrian Cornellius Sidabutar";
	char gelar[] = ", S.T";
	//Menggabungkan string
	strcat(nama, gelar);
	printf("Nama lengkap: %s\n", nama);
	return 0;
}
