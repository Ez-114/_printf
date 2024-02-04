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

	if (format == NULL || (format[0] == '%' && !format[1]))
		exit(100);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		exit(101);

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			/* specifier part */
			i++; /* go to what ever after '%' */
			p = get_specifier(format[i]);
			if (!p)
				total_printed += print_letter(format[i]);
			else
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
