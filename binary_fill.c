#include "main.h"

/**
 * print_octal - calculates a long octal number
 *
 * @bnr: array where is stored the binary.
 * @ioct: array where is stored the octal.
 *
 * Return: binary array.
 */
char print_octal(char *bnr, char *ioct)
{
	int op, i = 63, j, ioct = 21, limit;

	oct[22] = '\0';
	for (i, ioct; i >= 0; i--, ioct--)
	{
		if (i > 0)
			limit = 4;
		else
			limit = 1;
		for (op = 0, j = 1; j <= limit; j *= 2, i--)
			op = ((bnr[i] - '0') * j) + op;
		i++;
		octal[ioct] = op + '0';
	}
	return (octal);
}
