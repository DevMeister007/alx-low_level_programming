#include <stdio.h>

/**
 * main - prints all numbers from 0
 * base 10
 * Return: (0) if successful
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		printf("%d", number);
	printf("\n");
	return (0);
}
