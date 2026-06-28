#include<stdio.h>
int main(){
	//Kamus
	int sum;
	int x;
	//Program
	sum = 0; //Inisialisasi nilai
	printf("Masukan nilai x (int), akhiri dengan 999: ");
	scanf("%d", &x);
	while (x!=999){
		sum = sum + x;
		printf("Masukan nilai x(int), akhiri dengan 999: ");
		scanf("%d", &x);
	}
	printf("Hasil penjumlahan = %d\n", sum);
	return 0;
}