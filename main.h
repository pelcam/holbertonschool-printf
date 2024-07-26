#ifndef MAIN_H
#define MAIN_H

/*struct caracter - some structure*/
typedef struct caracter
{
	char *c;
	void (*f)(args);
} caracter_t;

int _printf(const char *format, ...);
void _printnum(va_list args);
void _printmod(va_list args __attribute__((unused)));
void _putchar(va_list args);
void _printstr(va_list args);
void printchar(char c);
#endif /* MAIN_H */
