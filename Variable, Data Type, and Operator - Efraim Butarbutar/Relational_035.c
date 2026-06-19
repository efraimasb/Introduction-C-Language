#include <stdio.h>
//Keterangan ==> 1 = true, 0 = false

int main(){
	//Membuat variabel a, b, dan c untuk menyimpan hasil operasi
	int a = 10;
	int b = 20;
	int c;
	
	c = a > b;
	printf("Hasil dari operasi a > b = %d\n", c);
	c = a >= b;
	printf("Hasil dari operasi a >= b = %d\n", c);
	c = a < b;
	printf("Hasil dari operasi a < b = %d\n", c);
	c = a <= b;
	printf("Hasil dari operasi a <= b = %d\n", c);
	c = a == b;
	printf("Hasil dari operasi a == b = %d\n", c);
	c = a != b;
	printf("Hasil dari operasi a != b = %d\n", c);
	
	return 0;
	
}
