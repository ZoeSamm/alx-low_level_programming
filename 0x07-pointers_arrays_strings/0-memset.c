#include "main.h"

/**
 * _memset - fill n bytes of memory with a constant value
 * @s: pointer to memory area
 * @b: constant value
 * @n: number of bytes to fill
 * Return: memory area
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int size = n;
	unsigned int i;

	if (size > 0)
	for (i = 0; i < n; i++)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			s[i] = b;
		}
		s[i] = b;
	}

	return (s);
}
