#include <stdio.h>
#include <stdlib.h>
int main()
{
	int* ptr;
	int n, i;
	printf("Masukkan elemen angka:");
	scanf("%d",&n);
	printf("Elemen angka yang dimasukkan: %d\n", n);
	
	ptr = (int*)malloc(n * sizeof(int));

	if (ptr == NULL) {
		printf("Memori tidak teralokasi.\n");
		exit(0);
	}
	else {
		
		printf("Memori berhasil dialokasikan\n");
		for (i = 0; i < n; ++i) {
			ptr[i] = i + 1;
		}
	
		printf("Elemen dari array adalah: ");
		for (i = 0; i < n; ++i) {
			printf("%d, ", ptr[i]);
		}
	}
	return 0;
}