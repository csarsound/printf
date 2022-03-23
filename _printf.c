#include "main.h"
int _printf(const char *format, ...)
{
	int i;
char copy [4000];	

	while (format[i])
	{
		i++;
	}
	write(1, format, i);
}
