#include "main.h"
int _printf(const char *format, ...)
{
	int i;

	while (format[i])
	{
		i++;
	}
	write(1, format, i);
}
