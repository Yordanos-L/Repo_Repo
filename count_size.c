#include "main.h"
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
