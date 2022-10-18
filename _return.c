#include "main.h"
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
