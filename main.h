#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/*struct caracter - some structure*/
typedef struct caracter
{
	char specifier;
	int (*f)(char);
} caracter_t;

int _printf(const char *format, ...);
int _putchar(char c);
int _printstr(char *s);

#endif /* MAIN_H */
