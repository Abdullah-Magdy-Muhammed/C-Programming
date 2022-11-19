#include <stdio.h>
#include <stdlib.h>
#define space 32
int main()
{
    int cword=0, countWithSpace=0,countWithoutSpace=0, i;
    char str[50];

     printf("Please, Enter the string = ");
     gets(str);

     for(i=0; str[i]!= '\0'; i++)
     {
       countWithSpace++;
     }

     for(i=0;i<countWithSpace;i++) {
        if(str[i] == space) {
            countWithoutSpace++;
        }
     }
     for(i=1;i<countWithSpace;i++) {
        if(str[i] == space && str[i-1] != space) {
            cword++;
        }
     }
     countWithoutSpace = countWithSpace - countWithoutSpace;

    printf("\nThe Number of characters =  %d",countWithoutSpace);
    printf("\nThe Number of words =  % d",cword);

    return 0;
}
