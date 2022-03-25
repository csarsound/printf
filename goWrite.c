#include "main.h"

int goWrite(char w)
{
    return (write(1, &w, 1));
}