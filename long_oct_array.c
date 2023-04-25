#include "main.h"

/**
 * binary_array - prints decimal in binary
 * @binary: pointer to binary
 * @int_fn: input number
 * @isneg: if input number is negative
 * @limit: size of the binary
 * Return: number of chars printed.
 */
char *binary_array(char *binary, long int int_fn, int isneg, int limit)
{
	int i = 0;

	for (; i < limit; i++)
		binary[i] = '0';
	binary[limit] = '\0';
	for (i = limit - 1; int_fn > 1; i--)
	{
		if (int_fn == 2)
			binary[i] = '0';
		else
			binary[i] = (int_fn % 2) + '0';
		int_fn /= 2;
	}
	if (int_fn != 0)
		binary[i] = '1';
	if (isneg)
	{
		for (i = 0; binary[i]; i++)
			if (binary[i] == '0')
				binary[i] = '1';
			else
				binary[i] = '0';
	}
	return (binary);
}
