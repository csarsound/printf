#include "main.h"
/**
 * @string - character string to traverse
 * @letters:  Get the information of the structure to apply it
 * @i: loop through the string
 * conv_s - converts the string depending on the character type
 * conv_c - convert a single character
*/
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
