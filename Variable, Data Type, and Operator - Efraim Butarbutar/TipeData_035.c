#include <stdio.h>
int main(){
	int usia = 19;	//Membuat variabel usia int dengan nilai 19.
	float berat = 65.3;	//Membuat variabel berat float dengan nilai 65.3.
	double tinggi = 178.43;	//Membuat variabel tinggi double dengan nilai 178.43.
	char jenis_kelamin = 'L';	//Membuat variabel jenis_kelamin char dengan nilai 'L'.	
	
	printf("Usia\t\t : %i tahun\n", usia);
	printf("Tinggi\t\t : %.2f cm\n", tinggi);
	printf("Berat\t\t : %.2f kg\n", berat);
	printf("Jenis kelamin\t : %c\n", jenis_kelamin);
	
	return 0;
}	
