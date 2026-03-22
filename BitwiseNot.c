#include <stdio.h>

int numberOne;
int numberTwo;

int main (void)
{
				printf("Enter Your first Number : ");
				scanf("%d", &numberOne);
				
				numberTwo = ~numberOne;
				
				printf("~%d = %d\n", numberOne, numberTwo);
				
				return(0);
}