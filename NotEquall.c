#include <stdio.h>

int numberOne;
int numberTwo;
int numberResult;

int main (void)
{
				printf("Enter Your Value : ");
				scanf("%d", &numberOne);
				
				printf("Enter Your Value : ");
				scanf("%d", &numberTwo);
				
				numberResult = numberOne != numberTwo;
				
				printf("%d != %d = %d\n", numberOne, numberTwo, numberResult);
				
				return(0);
}