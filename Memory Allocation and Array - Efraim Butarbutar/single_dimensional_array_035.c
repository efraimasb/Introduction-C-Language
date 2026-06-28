//Program yang membuat array satu dimensi
#include <stdio.h>
#include <stdlib.h>
int main()
{
	//Kamus
	int i; //variabel untuk iterasi
	int a[10]; //deklarasi array bertipe integer dan terdiri dari 10 elemen
	
	//Set the elements of array to i+10
	for(i=0; i<10; i++)
		a[i] = i+10;
	//Print the elements of array
	for(i=0; i<10; i++)
		printf("%d\n", a[i]);
		
	system("PAUSE");
	return 0;
}
