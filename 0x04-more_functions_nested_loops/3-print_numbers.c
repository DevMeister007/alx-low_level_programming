#include "main.h"
/**
 * print_numbers - print numbers from 0 to 9
 * followed by  an new line
 */
void print_numbers(void)
{
	int n;

	while (n < 10)
	{
		_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}
