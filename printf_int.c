#include "main.h"

/**
 * print_int - imprime numeros enteros
 * @args: lista de argumentos
 * Return: numero de caracteres impresos
 */

int print_int(va_list args)
{
	int n = va_arg(args, int);
	int contador = 0;
	char buffer[12];
	int i = 0, j;
	unsigned int num;

	if (n < 0)
	{
		putchar('-');
		contador++;
		num = -n;
	}
	else
	{
		num = n;
	}
	do {
		buffer[i++] = (num % 10) + '0';
		num /= 10;
	} while (num > 0);
	for (j = i - 1; j >= 0; j--)
	{
		putchar(buffer[j]);
		contador++;
	}
	return (contador);
}
