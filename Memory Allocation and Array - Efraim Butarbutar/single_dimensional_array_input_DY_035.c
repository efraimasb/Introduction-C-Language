//Program membuat array satu dimensi dan menerima elemen array dari input user
#include <stdio.h>
#include <stdlib.h>
int main()
{
	//Kamus
	int i; //Variabel untuk iterasi
	int a[10]; //deklarasi array bertipe integer
				//dan terdiri dari 10 elemen
	
	//set the elements of array to i+10
	for(i=0; i<10; i++){
		printf("Masukkan nilai array a[%d]: ", i);
		scanf("%d", &a[1]);
	}
	//Print the elements of array
	for(i=0; i<10; i++)
		printf("%d\n", a[i]);
		
	system("PAUSE");
	return 0;
}
