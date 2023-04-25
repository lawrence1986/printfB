#include "main.h"
/**
 * prinlint - prints a long integer
 * @arguments: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed.
 */
int prinlint(va_list args, char *buf, unsigned int ibuf)
{
	long int int_fnput;
	unsigned long int int_fn, int_temp, i, div, isneg;

	int_fnput = va_arg(args, long int);
	isneg = 0;
	if (int_fnput < 0)
	{
		int_fn = int_fnput * -1;
		ibuf = handl_buf(buf, '-', ibuf);
		isneg = 1;
	}
	else
	{
		int_fn = int_fnput;
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
	return (i + isneg);
}
