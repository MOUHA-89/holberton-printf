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
const char *p;
va_start(args, format);
for (p = format; *p != '\0'; p++)
{
if (*p == '%' && (*(p + 1) == 'c' || *(p + 1) == 's' || *(p + 1) == '%'))
{
p++;
if (*p == 'c')
{
char c = (char)va_arg(args, int);
write(1, &c, 1);
count++;
}
else if (*p == 's')
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
else if (*p == '%')
{
write(1, "%", 1);
count++;
}
}
else
{
write(1, p, 1);
count++;
}
}
va_end(args);
return (count);
}
