#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * _printf - a simplified version of printf.
 * @format: the format string.
 * print_int - a function that print an number.
 * Return: the number of characters printed.
 */
void print_int(int num)
{
if (num < 0)
{
putchar('-');
num = -num;
}
char str[20];
int i = 0;

if (num == 0)
{
putchar('0');
return;
}
while (num > 0)
{
str[i++] = (num % 10) + '0';
num /= 10;
}
for (int j = i - 1; j >= 0; j--)
{
putchar(str[j]);
}
}
int main(void)
{
print_int(-123);
printf("\n");
print_int(456);
printf("\n");
print_int(0);
printf("\n");
return (0);
}
