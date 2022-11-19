#include <stdio.h>
#include <stdlib.h>
#define size 10
int main()
{
    char firstName[size],lastName[size],fullName[size*2];
    printf("Please Enter Your First Name Bruh!");
    gets(firstName);
    printf("Please Enter Your Last Name Bruh!");
    gets(lastName);
    strcpy(fullName,firstName);
    strcat(fullName," ");
    strcat(fullName,lastName);

    printf("Your Full Name is %s",fullName);
    return 0;
}
