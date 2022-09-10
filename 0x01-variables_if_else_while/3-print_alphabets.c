#include <stdio.h>

/**
 * main -prints alphabets in lowercase then
 * uppercase
 *
 * Return: (0) upon success
 */
int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	for (a = 'A'; a <= 'Z'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}

