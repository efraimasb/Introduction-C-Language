#include <stdio.h>
int main (){
	char nama[] = "Efraim Butarbutar";
	char huruf = 'a';
	char* x;
	
	printf("Program untuk mencari huruf 'a' pada kata Efraim Butarbutar :", huruf);
	printf("\n");
	
	x = strchr(nama, huruf);
	
	while(x != 0){
		printf("Maka huruf a ditemukan pada huruf ke %d\n", x-nama+1);
		x = strchr(x+1, huruf);
	}
	return 0;
}
