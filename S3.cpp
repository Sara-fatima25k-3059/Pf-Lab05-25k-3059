#include <stdio.h>

int main() {
    int x, y, maximum;

    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);

    maximum = (x > y) ? x : y;

    printf("The maximum number is: %d\n", maximum);

    return 0;
}
