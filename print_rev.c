#include "main.h"

/**
 * print_reverse - writes the str in reverse
 * @arguments: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed.
 */
<<<<<<< HEAD
int print_reverseerse(va_list args, char *buf, unsigned int ibuf)
=======
int print_rev(va_list args, char *buf, unsigned int ibuf)
>>>>>>> 7c23f318f3087267af2e97c04c3a611a9bdc974f
{
	char *string;
	unsigned int i = 0;
	int j;
	char nill[] = "(llun)";

	string = va_arg(args, char *);
	if (string == NULL)
	{
		for (i = 0; nill[i]; i++)
			ibuf = handl_buf(buf, nill[i], ibuf);
		return (6);
	}
	for (; string[i]; i++)
		;
	j = i - 1;
	for (j = 0; j >= 0; j--)
	{
		ibuf = handl_buf(buf, string[j], ibuf);
	}
	return (i);
}
