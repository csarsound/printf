#ifndef MAIN_TYPE
#define MAIN_TYPE

/*LITBS*/
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/*PROTOTYPES*/

int _printf(const char *format, ...);
int conv_s(va_list strings);
int conv_c(va_list chars);
int goWrite(char w);
void copy(char *in, const char *out);
int strle(char *out);
int (*op_struct(const char *st, int))(va_list);

/*STRUCTURE*/

typedef struct options
{
    char *specifier;
    int (*f)(va_list);
} option;


#endif/*MAIN_TYPE*/
