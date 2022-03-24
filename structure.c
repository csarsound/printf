#include "main.h"
char *searchFun(const char *format, va_list ptr)
{
  int x;
  option choice[] = 
  {
    {"c", funC},
    {"s", funS},
    {"%", funP},
    {"d", funD},
    {"i", funI},
    {NULL, NULL}
  };

  for (x = 0; choice[x].t; x++)
  {
    if (*(choice[x].t) == *format)
      break;
  }
  return (choice[x].f);