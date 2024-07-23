#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

typedef struct spe {
    char *chara;
    void (*f)(va_list);
} specifiers;

int _printf(const char *format, ...);
void _putchar(va_list args);
void _printstr(va_list args);
#endif