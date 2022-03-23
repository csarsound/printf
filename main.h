#ifndef MAIN_TYPE
#define MAIN_TYPE

/*LITBS*/
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/*PROTOTYPES*/

int _printf(const char *format, ...);
char *conv_c (void *,va_list in);
char *conv_s (void *,va_list in);


#endif/*MAIN_TYPE*/
