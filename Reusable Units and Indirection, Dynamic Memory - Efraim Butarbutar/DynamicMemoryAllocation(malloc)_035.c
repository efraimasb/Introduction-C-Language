//Efraim Asidovanio Butarbutar
//14S21035
//Dynamic Memory Allocation fungsi Malloc

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
     char *dynamicMem;
     dynamicMem = malloc( 20 * sizeof(char) );
     if(dynamicMem== NULL)
    
	 {
        printf("Gagal mengalokasikan memori\n");
     }
    
	 else
     {
        printf("Alamat Memori = %u\n", dynamicMem);
        strcpy( dynamicMem,"Percobaan memori");
     }
     printf("Memori yang dialokasikan = %s\n", dynamicMem );
     free(dynamicMem);  // Membebaskan memory

}
