#include "main.h"

/**
 * print_upx - prints a decimal in hexadecimal
 * @arguments: The character to print
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed
 */
int print_upx(va_list args, char *buf, unsigned int ibuf)
{
	int int_input, i, isnegative, figure, first_digit;
	char *hexadecimal, *binary;

	int_input = va_arg(args, int);
	isnegative = 0;
	if (int_input == 0)
	{
		ibuf = handl_buf(buf, '0', ibuf);
		return (1);
	}
	if (int_input < 0)
	{
		int_input = (int_input * -1) - 1;
		isnegative = 1;
	}
	binary = malloc(sizeof(char) * (32 + 1));

	binary = binary_array(binary, int_input, isnegative, 32);
	hexadecimal = malloc(sizeof(char) * (8 + 1));
	hexadecimal = x_array(binary, hexadecimal, 1, 8);
	for (first_digit = i = figure = 0; hexadecimal[i]; i++)

	binary = binary_array(binary, int_input, isnegative, 32);
	hexadecimal = malloc(sizeof(char) * (8 + 1));
	hexadecimal = x_array(binary, hexadecimal, 1, 8);
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
