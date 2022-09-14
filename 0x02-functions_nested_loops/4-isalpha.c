#include "main.h"
/**
 * _isalpha - checks for alphabet character
 * @st: the character to be checked
 * Return: 1 if c is a letter, otherwise 0
 */
int _isalpha(int st)
{
	return ((st >= 'a' && st <= 'z') || (st >= 'A' && st <= 'Z'));
}
