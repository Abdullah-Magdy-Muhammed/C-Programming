#include <stdio.h>
#include <stdlib.h>

int task3()
{
    printf("Hello world!\n");
    char ch;
    printf("Please Enter Your char!!\n");
    scanf("%c",&ch);
    int ascii = ch;
    printf("your character ASCII Code of %c = %d", ch, ascii);

    return 0;
}
