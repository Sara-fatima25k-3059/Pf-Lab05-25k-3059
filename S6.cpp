#include <stdio.h>

int main() {
    char color;

    printf("Enter traffic light color (R, Y, G): ");
    scanf(" %c", &color);

    if (color == 'r' || color == 'R') {
        printf("Stop\n");
    } else if (color == 'y' || color == 'Y') {
        printf("Caution\n");
    } else if (color == 'g' || color == 'G') {
        printf("Go\n");
    } else {
        printf("Invalid color entered.\n");
    }

    return 0;
}
