#include "main.h"

/**
 * prinhoct - prints long decimal number in octal
 * @arguments: input number
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed.
 */
int prinhoct(va_list args, char *buf, unsigned int ibuf)
{
<<<<<<< HEAD
	short int int_fnput, i, isnegative, figure, first_digit;
	char *octal, *binary;
=======
	short int int_input, i, isnegative, count, first_digit;
	char *octr, *binary;
>>>>>>> 7c23f318f3087267af2e97c04c3a611a9bdc974f

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

	binary = malloc(sizeof(char) * (16 + 1));
<<<<<<< HEAD
	binary = binary_array(binary, int_fnput, isnegative, 16);
	octal = malloc(sizeof(char) * (6 + 1));
	octal = fill_short_oct_array(binary, octal);
	for (first_digit = i = figure = 0; octal[i]; i++)
=======
	binary = binary_array(binary, int_input, isnegative, 16);
	octr = malloc(sizeof(char) * (6 + 1));
	octr = fill_short_oct_array(binary, octal);
	for (first_digit = i = count = 0; octr[i]; i++)
>>>>>>> 7c23f318f3087267af2e97c04c3a611a9bdc974f
	{
		if (octal[i] != '0' && first_digit == 0)
			first_digit = 1;
		if (first_digit)
		{
<<<<<<< HEAD
			ibuf = handl_buf(buf, octal[i], ibuf);
			figure++;
=======
			ibuf = handl_buf(buf, octr[i], ibuf);
			count++;
>>>>>>> 7c23f318f3087267af2e97c04c3a611a9bdc974f
		}
	}
	free(binary);
	free(octal);
	return (figure);
}
