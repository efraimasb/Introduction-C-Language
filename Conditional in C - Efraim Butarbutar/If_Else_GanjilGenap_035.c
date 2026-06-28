#include <stdio.h>
int main(){
	//Kamus	
	int x;
	//Algoritma
	printf ("Masukkan sebuah bilangan bulat: ");
	scanf("%d", &x);
	if(x%2 == 0){
		printf("%d adalah bilangan genap\n", x);
	}
	else
		printf("%d adalah bilangan ganjil\n", x);
	getch();
	return 0;
}
