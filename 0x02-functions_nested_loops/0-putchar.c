include <stdio.h>
/**
 * main - Write a program that prints _putchar, followed by a new line.
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	printf("_putchar\n");
=======
#include "main.h"
/**
* main - prints putchar
* Return: 0 (Success)
*/
int main(void)
{
	putchar('0');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');

>>>>>>> 4b1067642c60a77d0584c4af3b0f2091a611dd6b
	return (0);
}
