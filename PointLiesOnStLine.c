#include <stdio.h>

int main() {
    float x1, y1, x2, y2, x3, y3;

    printf("Enter x1 y1: ");
    scanf("%f %f", &x1, &y1);

    printf("Enter x2 y2: ");
    scanf("%f %f", &x2, &y2);

    printf("Enter x3 y3: ");
    scanf("%f %f", &x3, &y3);

    if (((y2 - y1) / (x2 - x1)) == ((y3 - y2) / (x3 - x2)))
        printf("The three points lie on the same straight line.\n");
    else
        printf("The three points do not lie on the same straight line.\n");

    return 0;
}