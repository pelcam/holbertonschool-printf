#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int handle_char(va_list args);
int handle_string(va_list args);
int handle_percent(va_list args);
int _putchar(char c);

typedef struct format_handler {
    char specifier;
    int (*handler)(va_list);
} format_handler_t;

#endif /* MAIN_H */

