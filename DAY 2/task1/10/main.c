#include <stdio.h>
#include <stdlib.h>

int main()
{
    int degree;
    printf("Please Enter Your Degree\n");
    scanf("%d",&degree);
    if (degree>=85) {
        printf("Your grade is Excellent");
    }
    else if(degree<85&&degree>=75){
        printf("Your grade is V.Good");
    }
    else if(degree<75&&degree>=65){
        printf("Your grade is Good");
    }
    else if(degree<65&&degree>=50){
        printf("Your grade is Acceptable");
    }
    else{
        printf("Fall!!");
    }
    return 0;
}
