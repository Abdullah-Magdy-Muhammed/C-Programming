#include <stdio.h>
#include <stdlib.h>
void magic(int n);

int main()
{
    int i,c,n,r;

    /* We get the range of matrix in variable n and use
       to set the range for magic square box  */

    printf("Enter the range of magic square\n");
    scanf("%d",&n);
    magic(n);

    return 0;
}
void magic(int num)
{
    int arr[num][num];
    int i,c,r;

    /*   In first for loop we use to arrange the elements
         on the equations of magic square box     */


    for(i=1;i<=num*num;i++)
    {
        r=(num-i%num+1+2*((i-1)/num))%num;    // for row
        c=((num-1)/2+i-1-(i-1)/num)%num;   // for column
        arr[r][c]=i;
    }

    /*    Here we print the generated magic square box using nested for loops   */


    for(r=0;r<num;r++)
    {
        for(c=0;c<num;c++)
        {
            printf("%d\t",arr[r][c]);
        }
        printf("\n");
    }
}
