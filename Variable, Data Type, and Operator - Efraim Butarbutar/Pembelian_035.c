#include <stdio.h>
int main(){
	//Pembelian perlengkapan kantor di toko Tulang sesuai dengan kuantitasnya.
	float sisa_uang, total;
	float pulpen = 2000.00;
	pulpen = 15 * pulpen;
	float pensil = 1000.00;
	pensil = 50 * pensil;
	float buku_catatan = 5000.00;
	buku_catatan = 12 * buku_catatan; 
	float uang = 110000.00;

	total = pulpen + pensil + buku_catatan;
	printf("Total Pembelian Pak Albert = %.2f\n", total);
	sisa_uang = uang - total;
	printf("Sisa Uang Pak Albert = %.2f\n", sisa_uang);

	if (sisa_uang > 0){
		printf("Pak Albert masih memiliki uang sisa.\n");
	} else if (sisa_uang == 0){
		printf("Pak Albert tidak memiliki uang sisa.\n");
	} else {
		printf("Pak Albert tidak memiliki cukup uang untuk membeli perlengkapan kantor.\n");
	}
	
	return 0;
	 
}
