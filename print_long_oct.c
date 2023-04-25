#include "main.h"
/**
 * prinloctal - prints long decimal number in octalal
 * @arguments: input number
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed.
 */
int prinloctal(va_list args, char *buf, unsigned int ibuf)
{
	long int int_input, i, isnegative, figure, first_digit;
	char *octal, *binary;

	int_input = va_arg(args, long int);
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

	binary = malloc(sizeof(char) * (64 + 1));
	binary = binary_array(binary, int_input, isnegative, 64);
	octal = malloc(sizeof(char) * (22 + 1));
	octal = print_octal(binary, octal);
	for (first_digit = i = figure = 0; octal[i]; i++)
	{
		if (octal[i] != '0' && first_digit == 0)
			first_digit = 1;
		if (first_digit)
		{
			ibuf = handl_buf(buf, octal[i], ibuf);
			figure++;
		}
	}
	free(binary);
	free(octal);
	return (figure);
}
