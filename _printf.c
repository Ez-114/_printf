#include "main.h"

/**
 * _printf - acts as printf
 * @format: passed formated string to print to stdout
 * Return: total printed characters
*/
int _printf(const char *format, ...)
{
	int total_printed = 0, i = 0;
	va_list args;
	int (*p)(va_list);

	if (format == NULL)
		return (0);

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			/* specifier part */
			i++; /* go to what ever after '%' */
			p = get_specifier(format[i]);
			total_printed += p(args);
		}
		else
		{
			total_printed += _putchar(format[i]);
		}
		i++;
	}

	va_end(args);
	return (total_printed);
}
