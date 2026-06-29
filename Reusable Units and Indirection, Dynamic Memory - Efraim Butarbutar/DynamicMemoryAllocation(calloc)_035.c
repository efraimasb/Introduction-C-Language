//Efraim Asidovanio Butarbutar
//14S21035
//Dynamic Memory Allocation fungsi calloc

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
     
	 char *dynamicMem;
     int n = 5;
     dynamicMem = (int*)calloc(n, sizeof(int));

     if( dynamicMem== NULL )
    
	 {
        printf("Gagal mengalokasikan memory\n");
     }
     else
     
	 {
        printf("Memory yang dialokasikan = %u\n", dynamicMem);
        strcpy( dynamicMem,"Percobaan memory");
     }
     
	 printf("Memory yang dialokasikan: %s\n", dynamicMem );
     free(dynamicMem);  // Membebaskan memory

}
