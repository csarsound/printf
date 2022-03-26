#ifndef MAIN_TYPE
#define MAIN_TYPE

/*LITBS*/
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/*PROTOTYPES*/

int _printf(const char *format, ...);
/*write a string*/
int conv_s(va_list strings);
/*write a character*/
int conv_c(va_list chars);
/**/
int conv_d(int n, va_list letters);

/*write character to stdout*/
int goWrite(char w);
void copy(char *in, const char *out);
int strle(char *out);
int (*op_struct(const char *st, int))(va_list);

/*STRUCTURE*/
/**
 * struct options - structure
 * @specifier: pointer arguments
 * @f: pointer function
 */

typedef struct options
{
char *specifier;
int (*f)(va_list);
} option;


#endif/*MAIN_TYPE*/
