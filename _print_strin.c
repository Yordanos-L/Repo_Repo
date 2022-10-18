#include "main.h"
/**
 * _print_strin - print string
 * @c: string pointer
 * @s: pointer
 * @i: pointer
 * Return: int
 */
int _print_strin(char *c, int *s, int *i)
{
	int j;

	for (j = 0; c[j] != '\0'; j++)
		;
	write(1, c, j);
	*i = *i + 1;
	return (*s + j);
}
