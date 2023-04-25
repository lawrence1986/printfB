#include "main.h"

/**
 * print_str - writes the string to stdout
 * @arguments: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: On success 1.
 */
int print_str(va_list args, char *buf, unsigned int ibuf)
{
	char *string;
	unsigned int i = 0;
	char nill[] = "(null)";

	string = va_arg(args, char *);
	if (string == NULL)
	{
		for (; nill[i]; i++)
			ibuf = handl_buf(buf, nill[i], ibuf);
		return (6);
	}
	for (; string[i]; i++)
		ibuf = handl_buf(buf, str[i], ibuf);
	return (i);
}
