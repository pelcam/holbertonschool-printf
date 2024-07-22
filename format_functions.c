#include "main.h"
#include <unistd.h>

/**
 */
int _putchar(char c)
{
	return (write(1, &c, 1);
}

/**
 */
int _printstr(char *s)
{
	return(write(1, s, sizeof(s) - 1);
}
