#include "main.h"
/**
 * _print_num - print number
 * @y: number to be printed
 * @f: pointer to function
 * @b: pointer
 * @g: pointer
 * Return: void
 */
void _print_num(long int y, int (*f)(long int), int *b, int *g)
{
	*(b) = *(b) + f(y);
	*(g) = (*g) + 1;
}
