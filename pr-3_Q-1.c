#include <stdio.h>

int main() {
    char letter = 'a';

    do {
        printf("%c ", letter);
        letter++;
    } while (letter <= 'z');

    return 0;
}
