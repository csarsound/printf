#include "main.h"

void copy(char *in, const char *out)
{
    int i;
    for (i = 0; out[i]; i++)
    {
        in[i]=out[i];
    }
    in[i] = '\0';
}