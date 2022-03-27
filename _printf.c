#include "main.h"
/**
 * _printf - main function
 * @format: Enter data string of the main.c
 * Return: along of string
 */
int _printf(const char *format, ...)
{
int i = 0;
int j = 0;

va_list init;
char buff[2000];
if (*format != '\0')
copy(buff, format);
va_start(init, format);
if (buff[0] == '%' && buff[1] == '\0')
return (-1);
for (i = 0; buff[i] != '\0'; i++, j++)
{
if (format[i] == '%')
{
i++;
if (buff[i] == '%')
{
goWrite(buff[i]);
}
else
{
if (op_struct(buff, (i)) == NULL)
{
goWrite(buff[i - 1]);
goWrite(buff[i]);
}
else
{
j--;
j += (op_struct(buff, (i))(init));
}
}
}
else
goWrite(buff[i]);
}
return (j);
}
