#include <stdio.h>

/**
 * main - print alphabet in lower and uppercase
 *
 * Description: tast 3
 * Return: (0) Succes
*/

int main(void)
{
  char ch;

  for (ch = 'a' ; ch <= 'z' ; ch++)
    {
      putchar(ch);
    }
  for (ch = 'A' ; ch <= 'Z' ; ch++)
    {
      putchar(ch);
    }
  putchar('\n');
  return (0);
}
