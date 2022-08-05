#ifndef HEADER_H
#define HEADER_H
#include <stdarg.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 *  * type_of_args - Struct type_of_args
 *   * @identifier: The conversion specifier
 *    * @f: The function pointer
 *     */
typedef struct type_of_args
{
	char *t;
	void (*f)(char *separator, va_list args);
} t_a;
void _print_char(char *separator, va_list args);
void _print_int(char *separator, va_list args);                                                             
void _print_f(char *separator, va_list args);
void _print_s(char *separator, va_list args); 
#endif
