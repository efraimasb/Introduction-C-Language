#include <stdio.h>
int main(){
	int a, b;
	printf("Enter your first number : ");
	scanf("%d", &a); //Memanggil nilai pertama
	printf("Enter your second number : ");
	scanf("%d", &b); //Memanggil nilai kedua
	
	//Printf hasil penjumlahan a dan b
	printf("Hasil penjumlahan a + b = %d\n", a+b);
	//Printf hasil pengurangan a dan b
	printf("Hasil pengurangan a - b = %d", a-b);
	return 0;
}
