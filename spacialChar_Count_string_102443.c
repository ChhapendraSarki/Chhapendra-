#include <stdio.h>
char stringOne[] = "Hello@ W@rld_string_ *this ->";
char numberCount;
int i;

int main (void)
{
    i = 0;
    while(stringOne[i] != '\0')
    {
        switch(stringOne[i])
        {
            case '@':
            case'_':
            case'*':
            case'-':
            case'>':
                ++numberCount;
                break;
                default:
                    break;
        }

        ++i;
    }

    printf("\n\n Spacial Character Count = %d", numberCount);

    printf("\n\n");

    return(0);
}


/* HomeWork.

1. string Reverce print.
2. reverce string store.
3. Count the Word int string.
*/
