#include "main.h"

/**
 * Print_oarray - writes the character c to stdout
 *
 * @bnr: array where is stored the binary.
 * @octal: array where is stored the octalal.
 *
 * Return: binary array.
 */
char *Print_oarray(char *bnr, char *octal)

{
	int op, i, j, ioctal, limit;

	octal[11] = '\0';
	for (i = 31, ioctal = 10; i >= 0; i--, ioctal--)
	{
		if (i > 1)
			limit = 4;
		else
			limit = 2;
		for (op = 0, j = 1; j <= limit; j *= 2, i--)
			op = ((bnr[i] - '0') * j) + op;
		i++;
		octal[ioctal] = op + '0';
	}
	return (octal);
}
