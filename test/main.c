#include "main.h"
#include <stdio.h>

int main(void)
{
    _printf("bonjour %s\n", "Mari");
    _printf(" Bonjour %s Bonjour %s Bonjour %s Bonjour %s\n", "Mari", "Mouni", "Kouti", "Dial");
    _printf("Character:[%c] Character:[%c] Character:[%c] \n", 'H', 'm', 'p');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    return(0);
}