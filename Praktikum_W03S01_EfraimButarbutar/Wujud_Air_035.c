#include<stdio.h>
int main (){
	int a; 
	
	printf("Masukkan suhu air dalam derajat Celcius(C): ");
	scanf("%i", &a);
	
	if(a < 0){
		printf("Wujud air adalah padat");
	}
	if(a <= 100 && a >= 0){
		printf("Wujud air adalah Cair");
	}
	if(a >= 100){
		printf("Wujud air adalah Gas");
	}
	return 0;
}
