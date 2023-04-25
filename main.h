#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct print - struct for printer functions
 * @type_arg: identifier
 * @f: pointer to a printer functions
 *
 * Description: struct that stores pointers to a
 * printer functions.
 */
typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} print_t;

int _printf(const char *format, ...);
int print_add(va_list args, char *buf, unsigned int ibuf);
int print_buf(char *buf, unsigned int nbuf);
char *print_oarray(char *bnr, char *octal);


char *print_octal(char *bnr, char *octal);
char *binary_array(char *binary, long int int_fn, int isneg, int limit);
int print_binary(va_list args, char *buf, unsigned int ibuf);
char *fill_short_octal_array(char *bnr, char *octal);
char *x_array(char *bnr, char *hex, int isupp, int limit);
int print_x(va_list args, char *buf, unsigned int ibuf);
int print_integer(va_list args, char *buf, unsigned int ibuf);
int prinlhex(va_list args, char *buf, unsigned int ibuf);
int prinlint(va_list args, char *buf, unsigned int ibuf);
int prinloctal(va_list args, char *buf, unsigned int ibuf);
int prinlunt(va_list args, char *buf, unsigned int ibuf);
int printxd(va_list args, char *buf, unsigned int ibuf);
int printhex(va_list args, char *buf, unsigned int ibuf);
int printoctalal(va_list args, char *buf, unsigned int ibuf);
int prinnupx(va_list args, char *buf, unsigned int ibuf);
int print_oc(va_list args, char *buf, unsigned int ibuf);
int prinpint(va_list args, char *buf, unsigned int ibuf);
int print_prg(va_list a __attribute__((unused)), char *buf, unsigned int i);
int print_reverse(va_list args, char *buf, unsigned int ibuf);
int print_rot(va_list args, char *buf, unsigned int ibuf);
int printhx(va_list args, char *buf, unsigned int ibuf);
int prinhint(va_list args, char *buf, unsigned int ibuf);
int prinhoctal(va_list args, char *buf, unsigned int ibuf);
int prinhunt(va_list args, char *buf, unsigned int ibuf);
int prinhupx(va_list args, char *buf, unsigned int ibuf);
int print_fnt(va_list args, char *buf, unsigned int ibuf);
int print_string(va_list args, char *buf, unsigned int ibuf);
int print_unt(va_list args, char *buf, unsigned int ibuf);
int print_upx(va_list args, char *buf, unsigned int ibuf);
int print_usr(va_list args, char *buf, unsigned int ibuf);
char *fill_short_octal_array(char *bnr, char *octal);
unsigned int handl_buf(char *buf, char c, unsigned int ibuf);

#endif
