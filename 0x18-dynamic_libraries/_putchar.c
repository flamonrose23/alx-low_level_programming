#include <unistd.h>

/**
 * _putchar - writing char c to stdout
 * @c: char to print
 *
 * Return: 1 on success and -1 returned on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
