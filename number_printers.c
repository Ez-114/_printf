#include "main.h"

/**
 * print_integer - prints integers to stdout
 * @ap: va_list macro passed from _printf
 * Return: number of printed digits
*/
int print_integer(va_list ap)
{
	int n = va_arg(ap, int);
	int num, last_digit = n % 10, current_digit, exp = 1;
	int  printed_digits = 1;

	n = n / 10;
	num = n;

	if (last_digit < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last_digit = -last_digit;
		printed_digits++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			current_digit = num / exp;
			_putchar(current_digit + '0');
			num = num - (current_digit * exp);
			exp = exp / 10;
			printed_digits++;
		}
	}
	_putchar(last_digit + '0');

	return (printed_digits);
}

/**
 * print_binary - prints given number to binary
 * @ap: va_list macro passed from _printf
 * Return: total printed binaries
*/
int print_binary(va_list ap)
{
	unsigned int number = va_arg(ap, unsigned int);
	char *buffer = malloc(32);
	int i, j;

	if (number == 0)
	{
		_putchar('0');
		return (1);
    }

	/* init buffer to 0 */
	for (i = 0; i < 32; i++)
		buffer[i] = '0';

	for (i = 0; number > 0; i++)
	{
		buffer[i] = number % 2;
		number /= 2;
	}

	/* print in reverse order to show binary number */
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(buffer[j] + '0');
	}

	free(buffer);
	return (i);
}
