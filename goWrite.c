#include "main.h"
/**
 * goWrite - print and buffer
 * @w: takes care of bringing character by character and printing it
 */
int goWrite(char w)
{
    return (write(1, &w, 1));
}
