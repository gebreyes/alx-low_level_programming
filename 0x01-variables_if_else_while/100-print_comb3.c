#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int j;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
if (i == j)
continue;
else

putchar(i % 10);
putchar((j % 10) + 1);
putchar(',');
}
putchar('\n');

return (0);
}
