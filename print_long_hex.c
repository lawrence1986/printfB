#include "main.h"
/**
 * prinlhex - prints a long decimal in hexadecimal
 * @arguments: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed
 */
int prinlhex(va_list args, char *buf, unsigned int ibuf)
{
	long int int_fnput, i, isnegative, figure, first_digit;
	char *hexadecimal, *binary;

	int_fnput = va_arg(args, long int);
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

	binary = malloc(sizeof(char) * (64 + 1));
	binary = print_barray(binary, int_fnput, isnegative, 64);
	hexadecimal = malloc(sizeof(char) * (16 + 1));
	hexadecimal = x_array(binary, hexadecimal, 0, 16);
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
