#include "main.h"

/**
 * _printf - Funcion que produce una salida segun un formato.
 * @format: Cadena de formato que contiene el texto y los especificadores.
 * Return: Numero de caracteres impresos (excluyendo el nulo).
 */

int _printf(const char *format, ...)
{
	int i = 0;
	va_list arg;

	if (format == NULL)
		return (-1);
	va_start(arg, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c' || *format == 's')
				i += handle_char_str(*format, arg);
			else if (*format == '%')
				i += handle_percent();
			else
			{
				putchar('%');
				putchar(*format);
				i += 2;
			}
		}
		else
		{
			putchar(*format);
			i++;
		}
		format++;
	}
	va_end(arg);
	return (i);
}
