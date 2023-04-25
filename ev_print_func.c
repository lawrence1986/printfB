#include "main.h"

/**
 * ev_print_func - returns the amount of identifiers.
 * @s: argument indentifier
 * @index: index of argument identifier.
 * Return: amount of identifiers.
 */
int ev_print_func(const char *s, int index)
{
	print_t pr[] = {
		{"c", print_usr}, {"s", print_usr}, {"i", print_integer},
		{"d", print_integer}, {"b", print_bnr}, {"u", print_unt},
		{"c", print_chr}, {"s", print_str}, {"i", print_unt},
		{"d", print_int}, {"b", print_binary}, {"u", print_unt},
		{"o", print_oct}, {"x", print_x}, {"X", print_upx},
		{"S", print_usr}, {"p", print_add}, {"li", prinlint},
		{"ld", prinlint}, {"lu", prinlunt}, {"lo", prinloctal},
		{"lx", prinlhex}, {"lX", printxd}, {"hi", prinhint},
		{"hd", prinhint}, {"hu", prinhunt}, {"ho", prinhoctal},
		{"hx", prinhhex}, {"hX", prinhupx}, {"#o", prinnoctal},
		{"#x", printhex}, {"#X", prinnupx}, {"#i", print_fnt},
		{"#d", print_fnt}, {"#u", print_unt}, {"+i", prinpint},
		{"+d", prinpint}, {"+u", print_unt}, {"+o", print_octal},
		{"+x", print_hex}, {"+X", print_upx}, {" i", print_fnt},
		{" d", print_fnt}, {" u", print_unt}, {" o", print_octal},
		{" x", print_hex}, {" X", print_upx}, {"R", print_rot},
		{"r", print_reverse}, {"%", print_prg}, {"l", print_prg},
		{"h", print_prg}, {" +i", prinpint}, {" +d", prinpint},
		{"+ i", prinpint}, {"+ d", prinpint}, {" %", print_prg},
		{NULL, NULL},
	};
	int i = 0, j = 0, first_index;

	first_index = index;
	while (pr[i].type_arg)
	{
		if (s[index] == pr[i].type_arg[j])
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
	return (j);
}
}
