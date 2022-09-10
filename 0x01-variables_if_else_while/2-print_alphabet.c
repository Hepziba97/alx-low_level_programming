#include <stdio.h>

/**
 * main - Entry point
 * Description: Printing alphabet in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	int ch;

		/* print lowercase letters*/
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
