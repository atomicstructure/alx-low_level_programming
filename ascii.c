#include <stdio.h>

/**
* main - Program to know the ascii value of a character
*
* Return: always 0 (Success)
*/
int main(void)
{
	char c;
	printf("Enter a character: ");
	scanf("%c", &c);
	printf("The value of %c = %d\n", c, c);
	return (0);
}

