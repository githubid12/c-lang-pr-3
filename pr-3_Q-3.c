#include <stdio.h>

int main() {
    int num, count;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("The number of digits in %d is %d.\n", num, 1);
    } else if (num < 0) {
        num = -num;
    }

    for (count = 0; num != 0; ++count) {
        num /= 10;
    }

    printf("The number of digits is %d.\n", count);

    return 0;
}
