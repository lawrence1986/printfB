#include "main.h"

/**
 * print_rot - writes the str in ROT13
 * @arguments: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed.
 */

int print_rot(va_list args, char *buf, unsigned int ibuf)
{
	char alf[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *string;
	unsigned int i = 0, j, k;
	char nill[] = "(avyy)";

	string = va_arg(args, char *);
	if (string == NULL)
	{
		for (; nill[i]; i++)
			ibuf = handl_buf(buf, nill[i], ibuf);
		return (6);
	}
	for (; string[i]; i++)
	{
		for (k = j = 0; alf[j]; j++)
		{
			if (string[i] == alf[j])
			{
				k = 1;
				ibuf = handl_buf(buf, rot[j], ibuf);
				break;
			}
		}
		if (k == 0)
			ibuf = handl_buf(buf, string[i], ibuf);
	}
	return (i);
}
