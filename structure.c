#include "main.h"
/**
 * op_struct - Structure of functions.
 * @st: Pointer to function.
 * @t: Compare number of characters.
 * Return: int(*)(va_list)
 */
int (*op_struct(const char *st, int t))(va_list)
{
option letters[] = {
{"s", conv_s},
{"c", conv_c},
{"d", conv_d},
{"i", conv_d},
{NULL, NULL}
};

int i;

for (i = 0; letters[i].specifier != NULL; i++)
{
if (letters[i].specifier[0] == st[t])
{
return (letters[i].f);
}
}

return (0);
}
