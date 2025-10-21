#include <stdio.h>

float fahrenheitToCelcius(float input) {
    return ((input - 32.0) * 5) / 9;
}

float kelvinToCelcius(float input) {
    return input - 273.15;
}

float celciusToFahrenheit(float input) {
    return ((input * 9) / 5) + 32.0;
}

float celciusToKelvin(float input) {
    return input + 273.15;
}


int main() {
    float inputTemp;
    char inputScale;
    char outputScale;
    float outputTemp;

    printf("Enter the temperature value: ");
    scanf("%f", &inputTemp);
    printf("Enter the original scale (C, F, or K): ");
    scanf("%s", &inputScale);
    printf("Enter the scale to convert to (C, F, or K): ");
    scanf("%s", &outputScale);



    if (inputScale == 'F') {
        inputTemp = fahrenheitToCelcius(inputTemp);
    } else if (inputScale == 'K') {
        inputTemp = kelvinToCelcius(inputTemp);
    } else if (inputScale == 'C') {
        // do nothin, we're already golden baby
    } else {
        printf("Invalid input scale!\n");
        return 0;
    }

    if (outputScale == 'F') {
        outputTemp = celciusToFahrenheit(inputTemp);
    } else if (outputScale == 'K') {
        outputTemp = celciusToKelvin(inputTemp);
    } else if (outputScale == 'C') {
        outputTemp = inputTemp;
    } else {
        printf("Invalid output scale!\n");
        return 0;
    }

    printf("Converted temperature: %.2f %c\n", outputTemp, outputScale);
    printf("Temperature category: ");

    if (inputTemp < 0) {
        printf("Freezing\n");
        printf("Weather advisory: Bundle up!\n");
    } else if (inputTemp < 10) {
        printf("Cold\n");
        printf("Weather advisory: Wear a jacket!\n");
    } else if (inputTemp < 25) {
        printf("Comfortable\n");
        printf("Weather advisory: Enjoy the outdoors!\n");
    } else if (inputTemp < 35) {
        printf("Hot\n");
        printf("Weather advisory: Drink lots of water!\n");
    } else {
        printf("Extreme Heat\n");
        printf("Weather advisory: Stay indoors!\n");
    }

}