#include <stdio.h>
/**
 * main - Write a program that prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}

	putchar(10); /* this is an ascii code for new line*/

	return (0);
}
