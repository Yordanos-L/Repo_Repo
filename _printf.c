#include "main.h"
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

	long int t;

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
				t = positive(va_arg(ap, long int));
				_print_num(t, _print_number, &s, &i);
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
long int positive(long int h)
{
	long int y;

	if (h < 0)
	{
		y = h * -1;
		return (y);
	}
	return (h);
}
