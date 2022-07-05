#include <stdio.h>

/**
 *main - 3-print_alphabets.c
 *
 *Description: task 3-print_alphabets.c
 *Return: this function return 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
		putchar('\n');

	return (0);
}
