#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
	_printf("String:[%s]\n", "I am a string !");
	_printf("Character:[%c]\n", 'H');
	len = _printf("Percent:[%%]\n");
    _printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
	return (0);
}
