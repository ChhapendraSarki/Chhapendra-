#include <stdio.h>

char numberOne;
char numberTwo;
char numberThree;

int main (void)
{
	numberOne = 5;
	numberTwo = 2;

	numberThree = numberOne ^ numberTwo;
	printf("%d ^ %d = %d\n", numberOne, numberTwo, numberThree);

	return(0);
}

