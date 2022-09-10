#include <stdio.h>

/**
 * main -prints all alphabets in lower case
 *
 * Return: 0 if successful
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
			putchar(a);
	}
	putchar('\n');
	return (0);
}
