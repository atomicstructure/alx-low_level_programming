#include <unistd.h>
/**
 * main - Write a program that prints _putchar, followed by a new line.
 *
 * Return: always 0 (Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
