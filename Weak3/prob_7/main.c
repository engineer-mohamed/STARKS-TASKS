#include <stdio.h>
#include <stdlib.h>

int qualityPoints (int grade);

int main()
{
    int grade;
    printf("Enter the grade : ");
    scanf("%i",&grade);
    printf("%i",qualityPoints(grade));
    return 0;
}

int qualityPoints (int grade){
    if((grade>89) &&(grade<101) )
        return 4;
    else if ((grade>79) && (grade<90))
        return 3;
    else if ((grade>69) && (grade<80))
        return 2;
    else if ((grade>59)&&(grade<70))
        return 1;
    else if (grade<60)
        return 0;
    else{
        printf("Enter value from 0 to 100 \n");
        return -1;
    }

}
