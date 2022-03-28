#include "main.h"
/**
* reduce - reduce the number
* @n: reducethe number that enter
* Return: the reduce number
*/

int reduce(unsigned int n)
{
	int i = 0;
	unsigned int j, k;

	if (n != 0)
	{
		k = (n / 10);
		j = (n % 10);
		i += reduce(k);
		i++;
		goWrite(j + '0');
		return (i);
	}
	return (NULL);
}

/**
 * conv_d - run the number
 * @letters: enter the data of struct
 * Return: numbers of characters
 */

int conv_d(va_list letters)
{
	int i, j = 0;
	unsigned int k;

	i = va_arg(letters, int);

	if (i < 0)
	{
		goWrite('-');
		j = 1;
		k = i * (-1);
	}
	else
		k = i;

	if (k > 9)
		return (j + reduce(k));

	goWrite(k + '0');
	return (j);
}
