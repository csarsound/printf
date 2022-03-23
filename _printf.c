#include "main.h"
int _printf(const char *format, ...)
{
	int i;
	va_list in;	

	while (format[i])
	{
	if(i == '%' && i == 's')
	{
		_printf("String[%s]\n","hola");
	}	
		i++;
	}
	write(1, format, i);
}
