#include "main.h"
#include <stdio.h>
/**
 * print_add - prints the address of an input variable
 * @arguments: input address.
 * @buf: buffer pointer.
 * @ibuf: index for buffer pointer
 *
 * Return: number of chars printed.
 */
int print_add(va_list args, char *buf, unsigned int ibuf)
{
	void *add;
	long int int_fnput;
	int i = 0, figure, first_digit, isnegative;
	char *hexadecimal, *binary;
	char nill[] = "(nil)";

	add = (va_arg(args, void *));
	if (add == NULL)
	{
		for (; nill[i]; i++)
			ibuf = handl_buf(buf, nill[i], ibuf);
		return (5);
	}
	int_fnput = (intptr_t)add;
	isnegative = 0;
	if (int_fnput < 0)
	{
		int_fnput = (int_fnput * -1) - 1;
		isnegative = 1;
	}
	binary = malloc(sizeof(char) * (64 + 1));
	binary = print_barray(binary, int_fnput, isnegative, 64);
	hexadecimal = malloc(sizeof(char) * (16 + 1));
	hexadecimal = x_array(binary, hexadecimal, 0, 16);
	ibuf = handl_buf(buf, '0', ibuf);
	ibuf = handl_buf(buf, 'x', ibuf);
	for (first_digit = i = figure = 0; hexadecimal[i]; i++)
	{
		if (hexadecimal[i] != '0' && first_digit == 0)
			first_digit = 1;
		if (first_digit)
		{
			ibuf = handl_buf(buf, hexadecimal[i], ibuf);
			figure++;
		}
	}
	free(binary);
	free(hexadecimal);
	return (figure + 2);
}
