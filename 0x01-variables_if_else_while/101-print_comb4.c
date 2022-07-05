#include <stdio.h>

/**
 * main - entry point
 * Return: always return 0
 */
int main(void)
{
int i, j, k;
for (i = 48; i <= 58; i++)
{
for (i = j; j <= 58; j++)
{
for (k = j; k <= 58; k++)
{
if (i == j || j == k || i == k)
continue;
}
putchar(i);
putchar(j);
puthcar(k);
if (i == 55 && j == 56 && k == 57)
{
break;
}
else
{
putchar(',');
putchar('');
}
}
}
putchar('\n');
return (0);
}
