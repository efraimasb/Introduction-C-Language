#include <stdio.h>
int main(){
    int number, i, temp = 0;
    printf("Enter any number to check prime: ");
    scanf("%d", &number);
    for(i=2; i<=number/2; i++){
        //condition for non-prime
        if(number%i == 0){
            temp = 1;
            break;
        }
    }
    if(number == 1){
        printf("1 is neither prime nor composite.");
    }
    else{
        if(temp == 0)
            printf("%d is a prime number", number);
        else
            printf("%d is composite number", number);
    }
    return 0;
}