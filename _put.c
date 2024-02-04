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
