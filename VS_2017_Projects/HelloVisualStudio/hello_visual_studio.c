#include <stdio.h>

int main(void) {
    /* Add some numbers and print the sum */
    int result = 19 - 23;
    printf("the answer is %d \n", result);

    float degrees_F, degrees_C;
    puts("Enter a temperature in degrees C");
    scanf("%f", &degrees_C);
    degrees_F = (degrees_C * 9 / 5) + 32.0;
    printf("%f degrees C is %f degrees F \n", degrees_C, degrees_F);


    return 0;
}