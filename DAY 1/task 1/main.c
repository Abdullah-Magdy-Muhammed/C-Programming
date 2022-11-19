#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello World!\n");
    int x, y;
    printf("Please Enter Your First Number!!\n");
    scanf("%d %d",&x,&y);
    printf("sum = %d\n",x+y);
    printf("sub = %d\n",x-y);
    printf("mul= %d\n",x*y);
    printf("div = %d\n",x/y);

    return 0;
}
