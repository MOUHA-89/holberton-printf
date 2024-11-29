#include "main.h"
#include <unistd.h>
#include <stdarg.h>
/**
 * format_char - Print a character.
 * @arg_list: List of arguments.
 * Return: 1
 */
int format_char(va_list arg_list)
{
char c = va_arg(arg_list, int);
return (write(1, &c, 1));
}

/**
 * format_string - Print a string.
 * @arg_list: List of arguments.
 * Return: return _string.
 */
int format_string(va_list arg_list)
{
char *str = va_arg(arg_list, char *);
int len = 0;

if (!str)
{
str = "(null)";
}

while (str[len])
{
len++;
}
return (write(1, str, len));
}

/**
 * format_percent - Print a percent sign.
 * @arg_list: List of arguments bu not used.
 * Return: 1
 */
int format_percent(va_list arg_list)
{
(void)arg_list;
return (write(1, "%", 1));
}

/**
 * format_int - Print an integer.
 * @arg_list: List of arguments.
 * Return: Number of interger printed.
 */
int format_int(va_list arg_list)
{
int num = va_arg(arg_list, int);
int count = 0;
char buffer[12];
int i = 0;
int is_negative = 0;

if (num == 0)
{
write(1, "0", 1);
return (1);
}

if (num < 0)
{
is_negative = 1;
num = -num;
}

while (num > 0)
{
buffer[i++] = (num % 10) + '0';
num = num / 10;
}

if (is_negative)
buffer[i++] = '-';

count = i;
while (i > 0)
write(1, &buffer[--i], 1);

return (count);
}
