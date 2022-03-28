#include "main.h"
/**
 * conv_s - converts the string depending on the character type
 * @letters:  Get the information of the structure to apply it
 * Return: String "s"
*/
int conv_s(va_list letters)
{
char *string = va_arg(letters, char *);
int i;

if (string == NULL)
string = "(null)";

for (i = 0; string[i]; i++)
{
goWrite(string[i]);
}
return (i);
}
/**
 * conv_c - convert a single character
 * @letters:  Get the information of the structure to apply it
 * Return: C:haracter "c"
 */
int conv_c(va_list letters)
{
char ch = va_arg(letters, int);

goWrite(ch);
return (0);
}
