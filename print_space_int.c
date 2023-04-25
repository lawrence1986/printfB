#include "main.h"

/**
 * print_int - prints int begining with space
 * @arguments: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed
 */
int print_fnt(va_list args, char *buf, unsigned int ibuf)
{
	int int_fnput;
	unsigned int int_fn, int_temp, i, div;

	int_fnput = va_arg(args, int);
	if (int_fnput < 0)
	{
		int_fn = int_fnput * -1;
		ibuf = handl_buf(buf, '-', ibuf);
	}
	else
	{
		int_fn = int_fnput;
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
