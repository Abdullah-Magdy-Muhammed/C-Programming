#include <stdio.h>
#include <stdlib.h>
#define size 4

int main()
{
    int degree[size],i,j,sum=0,min=0, max=0;
    for (i=0;i<size;i++) {
        printf("Please Enter your %d degree\t",i+1);
        scanf("%d",&degree[i]);
        sum += degree[i];

    }
    printf("Summation of degree is %d\n",sum);
    printf("Average of degrees is %d\n",sum/(size-1));
    max = min = degree[0];

    for (j=0;j<size;j++) {
         if (min > degree[j]){
            min = degree[j];
        }
        if (max < degree[j]){
            max = degree[j];
        }
    }
        printf("Max is %d\n",max);
        printf("Min is %d",min);


    return 0;
}
