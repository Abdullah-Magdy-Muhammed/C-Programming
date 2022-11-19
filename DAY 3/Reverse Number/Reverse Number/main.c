#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, reverse = 0, remainder;

    printf("Please Enter an integer Number: ");
    scanf("%d", &number);

    while (number != 0) {
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number /= 10;
    }

    printf("Reversed number = %d", reverse);
    return 0;
}
