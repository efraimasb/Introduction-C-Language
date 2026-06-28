#include<stdio.h>
int main(){
	//Kamus
	int counter = 1;
	int number;
	printf("Enter a number : ");
	scanf("%d", &number);
	
	//algoritma
	for(counter; counter <= number; counter++){
		printf("It is %d\n", counter);
	}
	return 0;
}