#include "main.h"

/**
 * _isupper -  checking for uppercase character
 * @c: input character
 * Return: if is uppercase character 1, in other case 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
