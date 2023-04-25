#include "main.h"

/**
 * prinsint - prints int begining with space
 * @arguments: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed
 */
int print_int(va_list args, char *buf, unsigned int ibuf)
{
	int int_input;
	unsigned int int_fn, int_temp, i, div;

	int_input = va_arg(args, int);
	if (int_input < 0)
	{
		int_fn = int_input * -1;
		ibuf = handl_buf(buf, '-', ibuf);
	}
	else
	{
		int_fn = int_input;
		ibuf = handl_buf(buf, ' ', ibuf);
	}
	int_temp = int_fn;
	div = 1;
	while (int_temp > 9)
	{
		div *= 10;
		int_temp /= 10;
	}
	for (i = 0; div > 0; div /= 10, i++)
	{
		ibuf = handl_buf(buf, ((int_fn / div) % 10) + '0', ibuf);
	}
	return (i + 1);
}
