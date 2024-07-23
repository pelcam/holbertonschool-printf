
int _putchar(va_arg(args))
{
	return (write(1, va_arg(args, char c), 1));
}


int _printstr(char *s)
{
	return(write(1, s, sizeof(s) - 1));
}