#include <stdio.h>

char numberOne;

int main (void)
{
    printf("Enter The Character : ");
    numberOne = getchar();
    
    printf("get Character Is : %c.\n",numberOne);
    
    return(0);
}