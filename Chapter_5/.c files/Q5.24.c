#include <stdio.h>

float fahrenheit( float );
float celsius ( float );

void main() {
    while (1)
    {   
        char response1, response2;
        float temp, result;
        printf("\nDo you want to convert temperature from one unit to another (y/n): ");
        scanf("%c", &response1);

        if (response1 == 'n')
            break;
        
        printf("Enter the temperature : ");
        scanf("%f", &temp);

        // printf("To Celsius(c) or Fahrenheit(f) : ");
        // scanf("%c", &response2);
        
        if (response2 == 'c') {
            result = fahrenheit(temp);
            printf("%.2f ℃ is equivalent to %.2f ℉\n", temp, result);
        }
        
        else if (response2 == 'f') {
            result = celsius(temp);
            printf("%.2f ℉ is equivalent to %.2f ℃\n", temp, result);
        }
    }
}

float celsius(float ftemp) {

    float result;

    result = (ftemp - 32) * 5 / 9;
    return result;
}

float fahrenheit(float ctemp) {

    float result;

    result = (ctemp * 9) / 5 + 32;
    return result;
}