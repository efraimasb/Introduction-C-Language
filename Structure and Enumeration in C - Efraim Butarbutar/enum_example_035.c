#include <stdio.h>
#include <string.h> 

enum JenisKelamin { pria, wanita};

int main(void){
	
	char nama[25];
	enum JenisKelamin gender;
	
	strcpy(nama, "Sari");
	gender = wanita;
	
	printf("Nama \t\t: %s\n", nama);
	printf("Jenis Kelamin \t: %d", gender);
	
	return 0;
}
