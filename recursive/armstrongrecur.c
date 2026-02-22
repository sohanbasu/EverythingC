#include <stdio.h>
#include <math.h>

int isArmstrong(int num, int digits) {
    if (num == 0)
        return 0;
    else
        return pow(num % 10, digits) + isArmstrong(num / 10, digits);
}

int main() {
    int number, digits = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    int originalNum = number;
    while(originalNum!=0) {
        originalNum /= 10;
        ++digits;
    }
    if(isArmstrong(number, digits)==number)
        printf("%d is an Armstrong number.\n", number);
    else
    printf("%d is not an Armstrong number.\n", number);

        return 0;
}