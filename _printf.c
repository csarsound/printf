#include "main.h"
int _printf(const char *format, ...)
{
	int i;
	va_list in;
	char buff [2000];	

	while (format[i])
	{
	if(format[i] == '%' && format[i + 1] == 's')
	{
		char *conv_s (void, va_list in);
	}	
		i++;
	}
	write(1, buff, i);
}

/* Hola */