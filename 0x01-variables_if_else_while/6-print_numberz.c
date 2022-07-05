#include <stdio.h>

/**
* main - Print all single digit numbers using only putchar
*
* Description: 6-print_numberz.c
* Return: Always 0 (Success)
*/
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	putchar(digit + '0');

	putchar('\n');

	return (0);
}
