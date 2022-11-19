#include <stdio.h>
#include <stdlib.h>

int main()
{
    int flag;
    char myCharacter;

    do {
        printf("Enter Your Character Plz!\n");
        myCharacter = getch();
        switch(myCharacter) {
            case 'n':
            case 'N':
                printf("NEW\n");
                break;
            case 'd':
            case 'D':
                printf("DISPLAY\n");
                break;
            case 'e':
            case 'E':
                flag = 1;
                break;
            default:
                printf("Please Enter A Valid Character\n");
        }
    } while (myCharacter != 'e' && myCharacter != 'E');

    return 0;
}
