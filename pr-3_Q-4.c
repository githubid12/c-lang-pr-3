#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit, sum;

    printf("Enter a number: ");
    scanf("%d", &num);


    firstDigit = num / 10;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

  
    lastDigit = num % 10;

  
    sum = firstDigit + lastDigit;
    printf("The sum of the first digit and the last digit of %d is %d.\n", num, sum);

    return 0;
}
