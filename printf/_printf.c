#include "main.h"
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *fmt, ...) {
  int c = 0;
  va_list args;
  va_start(args, fmt);
  for (; *fmt; fmt++) {
    if (*fmt == '%') {
      fmt++;
      switch (*fmt) {
        case 'c': c += write(1, va_arg(args, char *), 1); break;
        case 's': {
          char *s = va_arg(args, char *);
          c += write(1, s ? s : "(null)", s ? strlen(s) : 6);
        } break;
        case '%': c += write(1, "%", 1); break;
      }
    } else {
      c += write(1, fmt, 1);
    }
  }
  va_end(args);
  return c;
}
