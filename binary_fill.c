#include "main.h"

/**
 * fill_long_oct_array - calculates a long octal number
 *
 * @bnr: array where is stored the binary.
 * @oct: array where is stored the octal.
 *
 * Return: binary array.
 */
char print_oct(char *bnr, char *octal)
{
	int op, i = 63, j, ioctal = 21, limit;

	oct[22] = '\0';
	for (i, ioctal; i >= 0; i--, ioctal--)
	{
		if (i > 0)
			limit = 4;
		else
			limit = 1;
		for (op = 0, j = 1; j <= limit; j *= 2, i--)
			op = ((bnr[i] - '0') * j) + op;
		i++;
		octal[ioctal] = op + '0';
	}
	return (octal);
}
