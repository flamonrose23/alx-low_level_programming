#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - printing strings followed by new line
 * @separator: string be printed between strings
 * @n: number of strings passed to function
 * @...: variable number of strings printed
 *
 * Description: If separator is NULL, it is not printed
 *              If one of strings if NULL, (nil) printed instead
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int ind;

	va_start(strings, n);

	for (ind = 0; ind < n; ind++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (ind != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
