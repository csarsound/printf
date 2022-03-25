#include "main.h"

int conv_s(va_list letters)
{
    char *string = va_arg(letters, char *);
	int i;
	
	if (string == NULL)
	string = "(Null)";
	
	for (i = 0; string[i]; i++)
	{
		goWrite(string[i]);
	}
	
	return (i);
}

int conv_c(va_list letters)
{
	
    char ch = va_arg(letters, int);
    
    goWrite(ch);
    return (1);
}
