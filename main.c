#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
    int len, len2;

    char *str = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Phasellus in pretium nulla, ut lacinia felis. Aenean id erat sed magna varius pulvinar et ac magna. Praesent ultrices sed ex a tincidunt. Donec volutpat in ante at iaculis. Phasellus dapibus, diam eget lobortis tristique, elit nunc feugiat metus, a dapibus elit lorem vitae ante. Nulla commodo ut tortor eget molestie. Aliquam tempus vestibulum felis. Vestibulum condimentum volutpat fermentum. Nulla tortor lacus, lobortis quis viverra fusce.";

    len = _printf("Let's print a simple sentence.\n");
    len2 = printf("Let's print a simple sentence.\n");
    printf("%d \t %d", len, len2);
    printf("\n");
    printf("----------------1------------");
    printf("\n");
    len = _printf("%c", 'S');
    printf("\t");
    len2 = printf("%c", 'S');
    printf("\n %d \t %d", len, len2);
    printf("\n");
    printf("----------------2------------");
    printf("\n");
    len = _printf("A char inside a sentence: %c. Did it work?\n", 'F');
    len2 = printf("A char inside a sentence: %c. Did it work?\n", 'F');
    printf("%d \t %d", len, len2);
    printf("\n");
    printf("----------------3------------");
    printf("\n");
    len = _printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
    len2 = printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
    printf("%d \t %d", len, len2);
    printf("\n");
    printf("----------------4------------");
    printf("\n");
    len = _printf("%s", "This sentence is retrieved from va_args!\n");
    len2 = printf("%s", "This sentence is retrieved from va_args!\n");
    printf("%d \t %d", len, len2);
    printf("\n");
    printf("----------------5------------");
    printf("\n");
    len = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
    len2 = printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
    len = _printf("Let's print a simple sentence.\n");
    printf("%d \t %d", len, len2);
    printf("\n");
    printf("----------------6------------");
    /*printf("\n");
    len = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
    len2 = printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
    printf("%d \t %d", len, len2);*/
    printf("\n");
    printf("----------------7------------");
    printf("\n");
    len = _printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
    len2 = printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
    printf("%d \t %d", len, len2);
    printf("\n");
    printf("-----------------8-----------");
    printf("\n");
    len = _printf("%%");
    printf("\t");
    len2 = printf("%%");
    printf("%d \t %d", len, len2);
    printf("\n");
    printf("-----------------9-----------");
    printf("\n");
    len = _printf("Should print a single percent sign: %%\n");
    len2 = printf("Should print a single percent sign: %%\n");
    printf("%d \t %d", len, len2);
    printf("\n");
    printf("----------------10-----------");
    printf("\n");
    len = _printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
    len2 = printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
    printf("%d \t %d", len, len2);
    printf("\n");
    printf("----------------11-----------");
    printf("\n");
    len = _printf("css%ccs%scscscs", 'T', "Test");
    printf("\t");
    len2 = printf("css%ccs%scscscs", 'T', "Test");
    printf("%d \t %d", len, len2);
    printf("\n");
    printf("----------------12-----------");
    printf("\n");
    len = _printf(str);
    printf("\t");
    printf("\n %d \t %d", len, len2);
    printf("\n");
    printf("----------------13-----------");
    printf("\n");
    len = _printf("man gcc:\n%s", str);
    printf("\n");
    len2 = printf("man gcc:\n%s", str);
    printf("%d \t %d", len, len2);
    printf("\n");
    printf("----------------14-----------");
    printf("\n");
    len = _printf(NULL);
    printf("\t");
    /*len2 = printf(NULL);*/
    printf("%d \t %d", len, len2);
    printf("\n");
    printf("----------------15-----------");
    printf("\n");
    len = _printf("%c", '\0');
    printf("\t");
    len2 = printf("%c", '\0');
    printf("%d \t %d", len, len2);
    printf("\n");
    printf("----------------16-----------");
    printf("\n");
    len = _printf("%");
    printf("\t");
    /*len2 = printf("%");*/
    printf("%d \t %d", len, len2);
    printf("\n");
    printf("----------------17-----------");
    printf("\n");
    len = _printf("%!\n");
    printf("\t");
    /*len2 = printf("%!\n");*/
    printf("%d \t %d", len, len2);
    printf("\n");
    printf("----------------18-----------");
    printf("\n");
    len = _printf("%K\n");
    /*len2 = printf("%K\n");*/
    printf("%d \t %d", len, len2);
    printf("\n");
    return (0);
}