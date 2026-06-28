#include<stdio.h>
int main(){
	int bilangan_pertama;
	int bilangan_kedua;
	int bilangan_ketiga;
	
	printf("Masukkan bilangan pertama: " );
	scanf("%i", &bilangan_pertama);
	printf("Masukkan bilangan kedua: ");
	scanf("%i", &bilangan_kedua);
	printf("Masukkan bilangan ketiga ");
	scanf("%i", &bilangan_ketiga);
	
	if(bilangan_pertama > bilangan_kedua && bilangan_pertama > bilangan_ketiga){
		printf("bilangan maksimum adalah %i");
	}
	if(bilangan_kedua > bilangan_pertama && bilangan_kedua > bilangan_ketiga){
		printf("bilangan maksimum adalah %i");
	}
	if(bilangan_ketiga > bilangan_pertama && bilangan_ketiga > bilangan_kedua){
		printf("bilangan maksimum adalah %i");
	}
	return 0;
	
}
