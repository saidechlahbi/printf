#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdarg.h>

/**
 * struct choose - .
 * @c: .
 * @ptr: .
 */

typedef struct choose
{
	char c;
	int (*ptr)(va_list arg);
} choose_tt;


int _putchar(char c);
int _puts(char *str);
int _printf(const char *format, ...);
int printdecimal(va_list arg);
int binary(va_list arg);
int ch(va_list arg);
int string(va_list arg);
int hex_upper(va_list arg);
int hex_lower(va_list arg);
int un_int(va_list arg);
int po(va_list arg);
int octal(va_list arg);
int after_percent(char s, va_list arg, int len, int i);
int if_specifier(choose_tt spec[], char s);
int reverse(va_list arg);
int rot13(va_list arg);
int pr_num(int n);
int pr_unsigned_num(unsigned int n);
unsigned int base_len(unsigned int n, int dev);
int int_to_binary(unsigned int n);
char *arr_rev(char *arr);
int int_to_octal(unsigned int n);
int int_to_hex(unsigned int n);
int int_to_heX(unsigned int n);
char *convert(unsigned long int num, int base, int uppercase);
int rot13(char *str);
/* printers */
int pr_char(va_list arg);
int pr_string(va_list arg);
int pr_percent(va_list arg);
int pr_int(va_list args);
int pr_unsigned_int(va_list args);
int pr_binary(va_list args);
int pr_octal(va_list args);
int pr_hexa(va_list args);
int pr_heXa(va_list args);
int pr_string_special(va_list args);
int pr_hexa_char(char c);
int pr_pointer(va_list args);
int pr_reverse(va_list args);
int pr_rot13(va_list arg);
int prf_looper(const char *format, func_printer printers[], va_list ap);
/* struct */

/**
 * struct func_holder - structor for functions
 *
 * @symb: characters to the specifier
 * @print_func: pointer to printer functions
 *
 */
struct func_holder
{
	char *symb;
	int (*print_func)(va_list arg);
};

typedef struct func_holder func_printer;

/* main files */
#endif
