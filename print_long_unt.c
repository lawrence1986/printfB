#include "main.h"
/**
 * prinlunt - prints a long unsigned integer
 * @arguments: number to print
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed.
 */
int prinlunt(va_list args, char *buf, unsigned int ibuf)
{
	unsigned long int int_fn, int_temp, i, div;

	int_fn = va_arg(args, unsigned long int);
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
	return (i);
}
