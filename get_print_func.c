#include "main.h"
/**
 * print_func - selects the correct function to perform the operation.
 * @s: argument indentifier
 * @index: index for argument indentifier
 * Return: pointer to a function.
 */
int (*print_func(const char *s, int index))(va_list, char *, unsigned int)
{
	print_t pr[] = {
		{"c", print_chr}, {"s", print_str},
		{"i", print_integer}, {"d", print_int},
		{"b", print_binary}, {"u", print_unt},
		{"o", print_oc}, {"x", print_x},
		{"X", print_upx}, {"S", print_usr},
		{"p", print_add}, {"li", prinlint},
		{"ld", prinlint}, {"lu", prinlunt},
		{"lo", prinloctal}, {"lx", prinlhex},
		{"lX", printxd}, {"hi", prinhint},
		{"hd", prinhint}, {"hu", prinhunt},
		{"ho", prinhoctal}, {"hx", printhx},
		{"hX", prinhupx}, {"#o", printoctal},
		{"#x", printhex}, {"#X", prinnupx},
		{"#i", print_integer}, {"#d", print_int},
		{"#u", print_unt}, {"+i", prinpint},
		{"+d", prinpint}, {"+u", print_unt},
		{"+o", print_oc}, {"+x", print_x},
		{"+X", print_upx}, {" i", print_fnt},
		{" d", print_fnt}, {" u", print_unt},
		{" o", print_oc}, {" x", print_x},
		{" X", print_upx}, {"R", print_rot},
		{"r", print_reverse}, {"%", print_prg},
		{"l", print_prg}, {"h", print_prg},
		{" +i", prinpint}, {" +d", prinpint},
		{"+ i", prinpint}, {"+ d", prinpint},
		{" %", print_prg}, {NULL, NULL},
	};
	int i = 0, j = 0, first_index;

	first_index = index;
	while (pr[i].type_arg)
	{
		if (s[index] == pr[i].type_arg[j])
		{
			if (pr[i].type_arg[j + 1] != '\0')
				index++, j++;
			else
				break;
		}
		else
		{
			j = 0;
			i++;
			index = first_index;
		}
	}
	return (pr[i].f);
}
