#include "main.h"
/**
 * goWrite - print and buffer
 * @w: takes care of bringing character by character and printing it
 * Return: one character to stdout
 */
int goWrite(char w)
{
return (write(1, &w, 1));
}
