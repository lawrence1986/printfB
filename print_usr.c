#include "main.h"

/**
 * print_usr - prints a string and values of
 * non-printed chars
 * @arguments: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed
 */
int print_usr(va_list args, char *buf, unsigned int ibuf)
{
	unsigned char *string;
	char *hexadecimal, *binary;
	unsigned int i, sum, op;

	string = va_arg(arguments, unsigned char *);
	binary = malloc(sizeof(char) * (32 + 1));
	hexadecimal = malloc(sizeof(char) * (8 + 1));
	for (sum = i = 0; string[i]; i++)
	{
		if (string[i] < 32 || string[i] >= 127)
		{
			ibuf = handl_buf(buf, '\\', ibuf);
			ibuf = handl_buf(buf, 'x', ibuf);
<<<<<<< HEAD
			op = str[i];
=======
			op = string[i];
>>>>>>> 7c23f318f3087267af2e97c04c3a611a9bdc974f
			binary = binary_array(binary, op, 0, 32);
			hexadecimal = x_array(binary, hexadecimal, 1, 8);
			ibuf = handl_buf(buf, hexadecimal[6], ibuf);
			ibuf = handl_buf(buf, hexadecimal[7], ibuf);
			sum += 3;
		}
		else
			ibuf = handl_buf(buf, string[i], ibuf);
	}
	free(binary);
	free(hexadecimal);
	return (i + sum);
}
