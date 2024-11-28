#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * _printf - a simplified version of printf.
 * @format: the format string.
 * Return: the number of characters printed.
 */
int _printf(const char *format, ...)
{
int count = 0;
va_list args;
const char *ptr;
va_start(args, format);
for (ptr = format; *ptr != '\0'; ptr++)
{
if (*ptr == '%' && (*(ptr + 1) == 'c' || *(ptr + 1) == 's' || *(ptr + 1) == '%'))
{
ptr++;
if (*ptr == 'c')
{
char c = (char)va_arg(args, int);
write(1, &c, 1);
count++;
}
else if (*ptr == 's')
{
char *s = va_arg(args, char *);
if (s == NULL)
s = "(null)";
while (*s)
{
write(1, s, 1);
s++;
count++;
}
}
else if (*ptr == '%')
{
write(1, "%", 1);
count++;
}
}
else
{
write(1, ptr, 1);
count++;
}
}
va_end(args);
return (count);
}
