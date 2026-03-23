#include <stdio.h>

int numberOne;
int numberTwo;
int numberThree;

int main (void)
{
				printf("Enter Your First Value : ");
				scanf("%d", &numberOne);
				
				printf("Enter Your Second Value : ");
				scanf("%d", &numberTwo);
				
				numberThree = numberOne >> numberTwo;
				
				printf("%d >> %d = %d\n", numberOne, numberTwo, numberThree);
				
				return(0);
}