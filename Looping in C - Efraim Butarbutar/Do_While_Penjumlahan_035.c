#include<stdio.h>
int main(){
	int i=0, N, jumlah = 0;
	do{
		printf("Masukan bilangan: ");
		scanf("%d", &N);
		jumlah += N;
		printf("Hasil penjumlahannya adalah %d\n", jumlah);
		i++;
	}while(i<5);
	return 0;
}