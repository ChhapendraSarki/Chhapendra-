#include <stdio.h>

int numberOne;
int numberTwo;
int numberThree;

int main (void)
{
				printf("Enter The First Number : ");
				scanf("%d", &numberOne);
				
				printf("Enter The Second Number : ");
				scanf("%d", &numberTwo);
				
				numberThree = numberOne || numberTwo;
				
				printf("%d || %d = %d\n", numberOne, numberTwo, numberThree);
				
				return(0);
}