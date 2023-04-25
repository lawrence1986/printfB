#include "main.h"

/**
 * print_binary - prints decimal in binary
 * @arguments: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed.
 */
<<<<<<< HEAD
<< << < HEAD
int print_binary(va_list arguments, char *buf, unsigned int ibuf)
=======
int print_binary(va_list arguments, char *buf, unsigned int ibuf)
>> >>7c23f318f3087267af2e97c04c3a611a9bdc974f
=======
int print_binary(va_list args, char *buf, unsigned int ibuf)

>>>>>>> 79bdecbffc86fe009a60ceb153a1dd9bd089b0bf
{
	int int_fnput, figure, i, first_one, isnegative;
	char *binary;

	int_fnput = va_arg(arguments, int);
	isnegative = 0;
	if (int_fnput == 0)
	{
		ibuf = handl_buf(buf, '0', ibuf);
		return (1);
	}
	if (int_fnput < 0)
	{
		int_fnput = (int_fnput * -1) - 1;
		isnegative = 1;
	}
	binary = malloc(sizeof(char) * (32 + 1));
	binary = binary_array(binary, int_fnput, isnegative, 32);
	first_one = 0;
	for (figure = i = 0; binary[i]; i++)
	{
		if (first_one == 0 && binary[i] == '1')
			first_one = 1;
		if (first_one == 1)
		{
			ibuf = handl_buf(buf, binary[i], ibuf);
			figure++;
		}
	}
	free(binary);
	return (figure);
}
