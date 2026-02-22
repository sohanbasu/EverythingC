#include <math.h>
#include <stdio.h>

int isArmstrong(int num) {
    int temp = num, number = num, sum = 0, count = 0;
    // one line digit counter
    //int K = log10(temp) + 1;
        while (num != 0) {
            num /= 10;
            ++count;
        }

    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }
    return (sum == number);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is an Armstrong number
    if (isArmstrong(num)) {
        printf("Yes, %d is an Armstrong Number\n", num);
    }
    else {
        printf("No, %d is not an Armstrong Number\n", num);
    }
    return 0;
}