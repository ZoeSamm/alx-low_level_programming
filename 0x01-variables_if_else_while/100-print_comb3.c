#include <stdio.h>
/**
 * main - printing dingle digit numbers
 * 
 * this program prints single digit numbers starting from 0
 * Return: 0
 */
int main(void)
{
	int i,j;

	for (i = 0; i <= 9; i++)
	{
		for (j=1; j <=9; i++)
		{
			if(j>i)
			{
			putchar(i + '0');
			putchar(j + '0');
			if (i!=8)
			{
	
			putchar(',');
			putchar('');
			}
		}
	}
}
	putchar('\n');
	return (0);
}
