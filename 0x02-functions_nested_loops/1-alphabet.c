#include <stdio.h>
/** 
 * main -point og entry
 * @void print_alphabet: prints out
 * lowercase alphabets
 * Return: always (0) if success
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
	return;
}
