#include <stdio.h>
#include <stdlib.h>

void is_prime (int num);

int main()
{
    int Number;
    printf("Enter the number : ");
    scanf("%i",&Number);
    is_prime(Number);
    return 0;
}

void is_prime (int num){
    if((num%2==0) || (num%3==0) ||(num==1)){
        if (num==2)
            printf("Number is prime \n");
        else
            printf("Number is not prime \n");
    }
    else
        printf("Number is prime ");
}
