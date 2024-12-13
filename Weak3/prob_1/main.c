#include <stdio.h>
#include <stdlib.h>

int revers_fun(int number);

int main()
{
    int num ;
    printf("Enter the number : ");
    scanf("%i",&num);
    printf("reversed of number is : %i ",revers_fun(num) );
    return 0;
}

int revers_fun(int number)
{
    int revers=0;
    while(number!=0){
        int digit = number%10;
        revers = revers*10 + digit;
        number = number/10;
    }
    return revers;
}
