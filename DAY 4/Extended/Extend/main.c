#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Please Enter Your Character!\n");
    ch = getch();
    if (ch == -32){
        ch = getch();
        printf("This is Extended key and this is it's ascii code %d",ch);
    } else{
        printf("Your Character is %c",ch);
    }
    return 0;
}
