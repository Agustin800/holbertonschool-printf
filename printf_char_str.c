#include "main.h"

/**
 * handle_char_str - Maneja los formatos %c y %s
 * @specifier: Especificador del formato (c o s)
 * @args: lista de argumentos
 * Return: Numero de caracteres impresos
 */

int handle_char_str(char specifier, va_list args)
{
	int i = 0;

	if (specifier == 'c')
	{
		char c = va_arg(args, int);

		putchar(c);
		i++;
	}
	else if (specifier == 's')
	{
		char *str = va_arg(args, char *);

		if (str == NULL)
			str = "(null)";
		while (*str)
		{
			putchar(*str);
			str++;
			i++;
		}
	}
	return (i);
}
