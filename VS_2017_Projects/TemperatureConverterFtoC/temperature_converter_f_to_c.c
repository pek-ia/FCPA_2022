#include <stdio.h>

int main(void) {

    float f;
    double c;

    printf("Please enter a temperature in degrees F: ");
    scanf("%f", &f);

    c = (f - 32.0) * 5.0 / 9.0;

    printf("In degrees C, that's %lf", c);

    return 0;
}