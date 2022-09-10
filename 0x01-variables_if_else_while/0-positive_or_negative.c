#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print random number everytime code runs
 * program will output if random number is positive 
 * or negative
 *
 * return - (0) if success
 */
 int main(void)
 {
 	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		{
			printf("%d is negative\n", n);
		}
	else if (n > 0)
		{
			printf("%d is positive\n", n);
		}
	else	{
			printf("%d is 0\n", n);
		}
	return (0);	
 }
