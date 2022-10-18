#include "main.h"
/**
 * _print - print array
 * @l: array
 * @n: array
 * @s: array
 * @i: size
 * @c: int
 * Return: void
 */
void _print(int *l, int *n, int *s, int i, long int c)
{
	int j;

	int t;

	char u = '-';

	if (c < 0)
		write(1, &u, 1);
	for (j = 0; j <= i; j++)
		for (t = 0; t < 10; t++)
		{
			if ((l[j] == n[t]) && (j != 0))
				write(1, (s + t), 1);
		}
}
