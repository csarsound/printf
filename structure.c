#include "main.h"
char (*searchFun(const char *format))(va_list ptr)
{
  int x;
  option choice[] = 
  {
    {"c", conv_c},
    {"s", conv_s},
    {"%", conv_%},
    {"d", conv_d},
    {"i", conv_i},
    {NULL, NULL}
  };

  for (x = 0; choice[x].t; x++)
  {
    if (*(choice[x].t) == *format)
      break;
  }
  return (choice[x].f);