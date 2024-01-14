#include <stdio.h>

int main() {
    int num;

    printf("Enter a three-digit integer: ");
    scanf("%d", &num);

    int digit1 = num / 100;
    int digit2 = (num / 10) % 10;
    int digit3 = num % 10;

    printf("Digits in ascending order: %d %d %d\n", digit1, digit2, digit3);

    return 0;
}


