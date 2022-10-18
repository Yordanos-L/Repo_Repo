#include "main.h"
/**
 * _print_number - print any number
 * Return: int
 * @c: number to be printed
 */
int _print_number(long int c)
{
	int s[] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58};

	int n[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9,};

	int *l;

	int j;

	long int y;

	int i;

	if (c <= 9 && c >= 0)
		for (j = 0; j < 10; j++)
			if (c == n[j])
			{
				write(1, &s[j], 1);
				return (1);
			}
	i = count_size(c);
	l = malloc(sizeof(int) * (i + 1));
	if (c < 0)
	{
		y = c * -1;
		_return(y, &i, l);
	}
	else if (c > 0)
		_return(c, &i, l);
	_print(l, n, s, i, c);
	free(l);
	if (c < 0)
		return (i + 1);
	return (i);
}
