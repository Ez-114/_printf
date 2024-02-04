#include "main.h"
#include <unistd.h>

/**
 * _putchar - print a character to stdout
 * @c: passed character
 * Return: (1) Success, (0) otherwise
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - print string to stdout
 * @str: passed string
 * Return: (number of printed characters) Success, (-1) if str is NULL
*/
int _puts(char *str)
{
	int total_chars = 0, i = 0;

	while (str[i] != '\0')
	{
		total_chars += _putchar(str[i]);
		i++;
	}

	return (total_chars);
}

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
 * print_str - printf passed str by _printf to stdout
 * @ap: va_list macro contains next char *
 * Return: (number of printed characters) Success, (-1) if str is NULL
*/
int print_str(va_list ap)
{
	char *str = va_arg(ap, char *);

	if (str == NULL)
	{
		_puts("(nil)\n");
		exit(101);
	}
	return (_puts(str));
}
