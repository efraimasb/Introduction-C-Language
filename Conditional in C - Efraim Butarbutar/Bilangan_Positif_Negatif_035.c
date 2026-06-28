#include<stdio.h>
int main (){
	int x;
	printf("Masukkan bilangan: ");
	scanf ("%d", &x);
	
	if(x > 0)
		printf("%d adalah bilangan positif\n", x);
	else if (x < 0)
		printf("%d adalah bilangan negatif\n", x);
	else
		printf("%d adalah bilangan 0\n", x);
	return 0;
}
