#ifndef MAIN_H
#define MAIN_H

/* headers needed */
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct fmt_specifier - format specifier's struct
 * @ch: contains the format type
 * @type_func: function pointer contains the correct func
*/
typedef struct fmt_specifier
{
	char *ch;
	int (*type_func)(va_list);
} fmter;

/* needed functions */
int _putchar(char);
int _puts(char *);
int print_char(va_list);
int print_percent(va_list);
int print_str(va_list);
int print_letter(char);
int print_integer(va_list);
int print_binary(va_list);
int (*get_specifier(char))(va_list);
int _printf(const char *format, ...);

#endif
