//Program yang menunjukkan bagaimana elemen suatu array disimpan pada memori yang berdekatan//
#include<stdio.h>
#include<stdlib.h>
int main(){
	//kamus
	//Jika arr[0] disimpan pada alamat x, maka arr[1] disimmpan pada alamat x + sizeof(int)
	//Jika arr[2] disimpan pada alamat x + sizeof(int) + sizeof(int)
	//Demikian seterusnya
	int arr[5], i;
	printf("Size of integer in this compiler is %u\n", sizeof(int));
	for(i=0; i<5; i++)
	//The use of '&' before a variable name, yields
	//Adress of variable
	printf("Address arr[%d] is %u\n", i, &arr[i]);//%u untuk unsigned integer
	system("PAUSE");
	return 0;
}
