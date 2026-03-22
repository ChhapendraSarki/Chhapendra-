#include <stdio.h>

int main(void)
{
    goto LabelOne;
    LabelOne:
    printf("Hello, Universe!!!");
    puts(".");
    printf("Hello, World!!!");
    
    return(0);
}