#include "main.h"
/**
 * print_hex - prints a decimal in hexadecimal
 * @arguments: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed
 */
int print_x(va_list args, char *buf, unsigned int ibuf)
{
	int int_fnput, i, isnegative, figure, first_digit;
	char *hexadecimal, *binary;

	int_fnput = va_arg(args, int);
	isnegative = 0;
	if (int_fnput == 0)
	{
		ibuf = handl_buf(buf, '0', ibuf);
		return (1);
	}
	if (int_fnput < 0)
	{
		int_fnput = (int_fnput * -1) - 1;
		isnegative = 1;
	}
	binary = malloc(sizeof(char) * (32 + 1));
	binary = print_barray(binary, int_fnput, isnegative, 32);
	hexadecimal = malloc(sizeof(char) * (8 + 1));
	hexadecimal = x_array(binary, hexadecimal, 0, 8);
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
	return (figure);
}
