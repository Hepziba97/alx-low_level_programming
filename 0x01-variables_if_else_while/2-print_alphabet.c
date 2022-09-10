#include <stdio.h>

/**
 * main - Entry point
 * Description: Printing alphabet in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	int num;
	int p;

	num = 97;
	while (num <= 122)
	putchar(num);
	num++;

	p = 97;
	while (p <= 122)
	{
		putchar(p);
		p++;
	}

	putchar('\n');
	return (0);
}
