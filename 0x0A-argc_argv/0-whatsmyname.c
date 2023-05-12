#include "main.h"
#include <stdio.h>

/**
 * main - function that prints its name
 * @argc: arguments's number
 * @argv: arguments's array
 *
 * Return: always 0 (success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
