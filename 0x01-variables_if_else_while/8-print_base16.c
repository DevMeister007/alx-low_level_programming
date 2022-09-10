#include <stdio.h>
/**
 * main - prints out numbers base 16
 * in lowercase
 * Return: (0) if success
 */
int main(void)
{
	int number;
	char alpha;

	for (number = 48; number < 58; number++)
	{
		putchar(number);
	}
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
