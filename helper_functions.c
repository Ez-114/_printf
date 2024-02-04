#include "main.h"

/**
 * get_specifier - gets the type of function for the passed specifier
 * @ch: passed specifier
 * Return: function pointer to the correct specifier printer function
 * , NULL otherwise.
*/
int (*get_specifier(char ch))(va_list)
{
	fmter specifiers[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_percent},
		{NULL, NULL}
	};
	int i = 0;

	while (specifiers[i].ch != NULL)
	{
		if (specifiers[i].ch[0] == ch)
			return (specifiers[i].type_func);
		i++;
	}

	return (NULL);
}
