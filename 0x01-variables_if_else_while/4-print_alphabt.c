#include <stdio.h>

/**
 * main - Entry point
 * Description - Printing alphabet in lowercase except e and q
 * Return: 0 (Success)
 */
int main(void)
{
	int ch = 'a';

		/* print lowercase except e and q*/
	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
