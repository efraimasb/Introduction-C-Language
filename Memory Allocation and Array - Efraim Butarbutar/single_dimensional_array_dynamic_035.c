//file name : single_dimensional_array_dynamic.c
//program untuk membuat array satu dimensi dengan alokasi dinamis
#include <stdio.h>
#include <stdlib.h>
int main (){
    //kamus
    int i;
    int *a;
    int sz;

    scanf("%d",&sz);
    a = (int*)malloc(sz*sizeof(int));

    for(i=0;i<sz;i++)
        a[i] = i+10;

    for (i=0;i<sz;i++)
        printf("%d\n",a[i]);

    system("PAUSE");
    return 0;
}
