#include <stdio.h>

/**
 *main - 3-print_alphabets.c
 *
 *Description: task 3-print_alphabets.c
 *Return: this function return 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
		putchar('\n');

	return (0);
}
