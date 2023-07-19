#ifndef _PRINTF_
#define _PRINTF_
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * struct printf_format - a structure
  *@printf_format> a pointer
  *@f: variable
  */
	typedef struct form
{
    char *printf_format; // printf_conditions
		int (*f)(va_list list);
} form_t;


int _putchar(char c);
void print_s(va_list list);
void print_c(va_list list);
void print_percent();
void print_d(va_list list);
void print_i(va_list list);
	int _printf(const char *format, ...);
int (*call_functions (const char *specifier))(va_list);
#endif

