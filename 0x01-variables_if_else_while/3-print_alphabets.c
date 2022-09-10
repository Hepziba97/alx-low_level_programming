#include <stdio.h>

/**
 * main - Entry point
 * Description: Printing alphabet in uppercase
 * Return: 0 (Success)
 */
int main(void)
{
	int ch;

		/* print lowercase letters*/
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
		/* print uppercase letters*/
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
