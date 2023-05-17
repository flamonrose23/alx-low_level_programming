#include "main.h"
#include <unistd.h>

/**
 * _putchar - writing char c to stdout
 * @c: char to print
 *
 * Return: 1 on success
 * On error, -1 returned and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
