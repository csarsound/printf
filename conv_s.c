#include "main.h"


char *conv_s (void *, va_list in)
{
	int i;
	
	if (in == NULL)
	in = "(Null)";
	
	for (i = 0, in[i], i++)
	{
		_print(in[i]);
	}
	
	return (i);
}	
