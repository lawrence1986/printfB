#include "main.h"

/**
 * prinnoctal - print the number in octalal begining with zero
 * @arguments: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed
 */
int printoctalal(va_list args, char *buf, unsigned int ibuf)
{
	int int_fnput, i, isnegative, figure, first_digit;
	char *octalal, *binary;

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
	ibuf = handl_buf(buf, '0', ibuf);
	binary = malloc(sizeof(char) * (32 + 1));
	binary = binary_array(binary, int_fnput, isnegative, 32);
	octalal = malloc(sizeof(char) * (11 + 1));
	octalal = print_oarray(binary, octalal);
	for (first_digit = i = figure = 0; octalal[i]; i++)
	{
		if (octalal[i] != '0' && first_digit == 0)
			first_digit = 1;
		if (first_digit)
		{
			ibuf = handl_buf(buf, octalal[i], ibuf);
			figure++;
		}
	}
	free(binary);
	free(octalal);
	return (figure + 1);
}
