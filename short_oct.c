#include "main.h"

/**
 * fill_short_oct_array - calculates a short octal number
 *
 * @bnr: array where is stored the binary.
 * @octal: array where is stored the octal.
 *
 * Return: binary array.
 */
char *fill_short_oct_array(char *bnr, char *octal)
{
	int op, i, j, ioctal, limit;

	oct[6] = '\0';
	for (i = 15, ioctal = 5; i >= 0; i--, ioctal--)
	{
		if (i > 0)
			limit = 4;
		else
			limit = 1;
		for (op = 0, j = 1; j <= limit; j *= 2, i--)
			op = ((bnr[i] - '0') * j) + op;
		i++;
		oct[ioctal] = op + '0';
	}
	return (oct);
}
