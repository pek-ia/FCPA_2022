#include <stdio.h>

float convert_f_to_c(float temperature_F) {
    return (temperature_F - 32.f) * (5 / 9.);
}

float convert_c_to_f(float temperature_C) {
    return temperature_C * 9/5 + 32.f;
}

int main(void) {

    float input_temp;
    float output_temp;

    char temperature_scale;

    printf("Enter F for Fahrenheit; enter C for Celsius: ");
    scanf("%c", &temperature_scale);


    if (temperature_scale == 'F') {
        printf("Enter the temperature in degrees: ");
        scanf("%f", &input_temp);
        output_temp = convert_f_to_c(input_temp);
        printf("Converted temperature in degrees C: %f\n", output_temp);
    }
    else if (temperature_scale == 'C'){
        printf("Enter the temperature in degrees: ");
        scanf("%f", &input_temp);
        output_temp = convert_c_to_f(input_temp);
        printf("Converted temperature in degrees F: %f\n", output_temp);
    }
    else {
        puts("Bad input!!!");
        return -1;
    }

}