#include "main.h"

/**
 * print_char - prints passed character by _printf to stdout
 * @ap: va_list macro contains the next int
 * Return: (1) Success, (0) otherwise
*/
int print_char(va_list ap)
{
	unsigned int ch = va_arg(ap, int);

	return (_putchar(ch));
}

/**
 * print_str - print passed str by _printf to stdout
 * @ap: va_list macro contains next char *
 * Return: (number of printed characters) Success, (-1) if str is NULL
*/
int print_str(va_list ap)
{
	char *str = va_arg(ap, char *);

	if (str == NULL)
		return (_puts("(null)"));
	return (_puts(str));
}

/**
 * print_percent - print passed '%' charcter by _printf to stdout
 * @ap: va_list macro
 * Return: (1) Success, (0) otherwise
*/
int print_percent(va_list ap)
{
	(void)ap;

	return (_putchar('%'));
}

int print_letter(char ch)
{
	_putchar('%');
	_putchar(ch);
	return (2);
}
