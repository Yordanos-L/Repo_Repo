#include "printf.h"
/**
 * _printf - prints anything
 * @format: list of types of arguments
 * Return: void
 */
int _printf(const char *format, ...)
{
	char spec[] = {'c', 's', '%', 'd', 'i'};

	va_list ap;

	int i;

	int s = 0;

	va_start(ap, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		switch (_bool(format, spec, i))
		{
			case 1:
				s = _print_strin(va_arg(ap, char *), &s, &i);
				break;
			case 2:
				s = s + _putchar(va_arg(ap, int));
				i++;
				break;
			case 3:
				_print_num(va_arg(ap, long int), _print_number, &s, &i);
				break;
			case 4:
				write(1, &spec[2], 1);
				s++;
				i++;
				break;
			default:
				s = s + _putchar(format[i]);
				break;
		}
	}
	va_end(ap);
	return (s);
}
/**
 * _print_num - print number
 * @y: number to be printed
 * @f: pointer to function
 * @b: pointer
 * @g: pointer
 * Return: void
 */
void _print_num(int y, int (*f)(long int), int *b, int *g)
{
	*(b) = *(b) + f(y);
	*(g) = (*g) + 1;
}
/**
 * _bool - print_all
 * Return: int
 * @format: string
 * @spec: string
 * @i: integer
 */
int _bool(const char *format, char *spec, int i)
{

	if ((format[i] == spec[2]) &&
			(format[i + 1] == spec[1]))
		return (1);
	else if ((format[i] == spec[2]) &&
			(format[i + 1] == spec[0]))
		return (2);
	else if ((format[i] == spec[2]) && ((format[i + 1]
					== spec[3]) || (format[i + 1] ==
						spec[4])))
		return (3);
	else if ((format[i] == spec[2]) && (format[i + 1]
					== spec[2]))
		return (4);
	return (5);
}
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
/**
 * _putchar - putchar
 * @c: char
 * Return: int
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
