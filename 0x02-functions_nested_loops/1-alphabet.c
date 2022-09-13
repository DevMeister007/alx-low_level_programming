#include "main.h"
/**
 * main -point og entry
 * print_alphabet: prints out
 * lowercase alphabets
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
