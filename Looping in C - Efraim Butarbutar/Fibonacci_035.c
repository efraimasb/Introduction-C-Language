#include <stdio.h>
int main()
{
    int banyak, batas;
    int bil_1 = 1;
    int bil_2 = 1;
    int bil_next = bil_1 + bil_2;
    printf("Enter any number to find the Fibonacci sequence: ");
    scanf("%d", &banyak);
    printf("The Fibonacci sequence of %d number is : \n%d, %d, ", banyak, bil_1, bil_2);
    for(batas = 3; batas <= banyak; batas++){
        printf("%d, ", bil_next);
        bil_1 = bil_2;
        bil_2 = bil_next;
        bil_next = bil_1 + bil_2;
    }
    return 0;
}