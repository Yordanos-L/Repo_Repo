#include "printf.h"
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
/**
 * _return - array initializer
 * @c: long int
 * @i: pointer
 * @d: pointer
 * Return: none
 */
void _return(long int c, int *i, int *d)
{
	int m;

	int r;

	int t;

	int j;

	m = c % 10;
	t = c / 10;
	j = *(i);
	while
		(t > 0) {
			r = t;
			d[j] = m;
			m = r % 10;
			t = r / 10;
			j--;
		}
	d[1] = m;
	d[0] = 0;
}
/**
 * _print - print array
 * @l: array
 * @n: array
 * @s: array
 * @i: size
 * @c: int
 * Return: void
 */
void _print(int *l, int *n, int *s, int i, int c)
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
/**
 * count_size - count size of an array
 * @c: long int
 * Return: int
 */
int count_size(long int c)
{
	int t;

	int i = 1;

	int r;

	int y = c * (-1);

	if (c >= 0)
	{
		t = c / 10;
		while
			(t > 0) {
				r = t;
				i++;
				t = r / 10;
			}
	}
	else if (c < 0)
		i = count_size(y);
	return (i);
}
