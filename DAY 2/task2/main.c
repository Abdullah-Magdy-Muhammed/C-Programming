#include <stdio.h>
#include <stdlib.h>

int main()
{
    float firstNumber;
    float secondNumber;
    char yourCharacter;
    printf("Please Enter Your First Number!\n");
    scanf("%f", &firstNumber);
    printf("Please Enter Your Second Number!\n");
    scanf("%f", &secondNumber);
    yourCharacter = getch();
    switch(yourCharacter) {
        case '+':
            printf("Your sum is %f" ,firstNumber + secondNumber);
            break;
        case '-':
            printf("Your sub is %f",firstNumber - secondNumber );
            break;
        case '*':
            printf("Your Mul is %f",firstNumber * secondNumber );
            break;
        case '/':
            printf("Your division is %f",firstNumber / secondNumber );
            break;
        default:
            printf("Not valid operators!");
    }


    return 0;
}
