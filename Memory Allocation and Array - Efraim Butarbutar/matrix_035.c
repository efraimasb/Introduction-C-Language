#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, j;
	int **a;
	int r, c;
	
	printf("Masukkan jumlah baris dan jumlah kolom : ");
	scanf("%d %d", &r, &c);

	printf("Input elemen : \n");
	
	//alokasi memori untuk array 2 dimensi
	a = (int **)malloc(r * sizeof(int *));
	for(i=0; i<r; i++){
		a[i] = (int *)malloc(c*sizeof(int));
	}
	//set element of array to i+j
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			scanf("%d", &a[i][j]);
		}
	}
	//menampilkan array 2 dimensi
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}