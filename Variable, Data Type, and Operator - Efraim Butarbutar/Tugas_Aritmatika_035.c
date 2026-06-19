#include <stdio.h>
int main(){
	//Membuat variabel a dan b
	int a, b;
	printf("Masukkan bilangan pertama:");
	scanf("%d",&a);//Memanggil nilai pertama
	printf("Masukkan bilangan kedua:");
	scanf("%d",&b);//Memanggil nilai kedua
	
	//Print hasil a dan b
	printf("Hasil perkalian a * b = %d \n", a*b);
	//Print Hasil pembagian a dan b
	printf("Hasil pembagian a / b = %d \n", a/b);
	//Print Hasil modulus a dan b
	printf("Hasil modulus a / b = %d  \n", a%b);
	return 0;
}
