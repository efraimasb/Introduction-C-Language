#include <stdio.h>
int main (){
	//Inisialisasi variabel 
	int x, y, a, b;
	x = 1 + 4 < 10;
	y = 2 + 6 > 13;
	
	//AND
	a = x && y;
	//OR
	b = x || y;
	
	//Output
	printf("Hasil dari x = 1 + 4 < 10 adalah %d \n", x);
	printf("Hasil dari y = 2 + 6 > 13 adalah %d \n", y);
	printf("Hasil dari a = x && y adalah %d \n", a);
	printf("Hasil dari b = x || y adalah %d \n", b);
	printf("Hasil dari b = x || y jika menggunakan NOT adalah %d \n", !b);
	return 0;
}
