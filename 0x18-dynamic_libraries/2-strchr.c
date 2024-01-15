#include "main.h"
#include <stddef.h>

/**
 * _strchr -starting point
 * @s: input value
 * @c: input value
 * Return: always 0 (success)
 */

char *_strchr(char *s, char c)
{
	int f = 0;

	for (; s[f] >= '\0'; f++)
	{
		if (s[f] == c)
			return (&s[f]);
	}
	return (0);
}
