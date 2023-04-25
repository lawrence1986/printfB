#include "main.h"

/**
 * fill_short_octal_array - calculates a short octalal number
 *
 * @bnr: array where is stored the binary.
 * @octalal: array where is stored the octalal.
 *
 * Return: binary array.
 */
char *fill_short_octal_array(char *bnr, char *octal)
{
	int op, i, j, ioctal, limit;

	octal[6] = '\0';
	for (i = 15, ioctal = 5; i >= 0; i--, ioctal--)
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
