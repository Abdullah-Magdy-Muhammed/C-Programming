#include <stdio.h>
#include <stdlib.h>

int main()
{
    int MyNumber;
    printf("Hello world!\n");
    printf("Please Enter Your Number!!");
    scanf("%d", &MyNumber);
    char MyChar = MyNumber;
    printf("Your char which is equal to %d is %c", MyNumber,MyChar );
    return 0;
}
