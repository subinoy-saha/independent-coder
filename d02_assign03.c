#include <stdio.h>
int main() {
    // =================================================================
    // QUESTION 1: Even or Odd Checker
    // =================================================================
    int num;
    printf("Enter your number: ");
    scanf("%d", &num);


    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }
    //==================================================================
    // QUESTION 2: Computing the Area of a Circle
    //==================================================================
    const float PI = 3.14159f;
    float radius, area;

    
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    printf("The area of the circle is: %.2f square units.\n", area);
    
    //==================================================================
    // QUESTION 3: Temperature Converter
    //==================================================================
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9.0f / 5.0f) + 32.0f;
    printf("%.2f ° Celsius is equal to %.2f ° Fahrenheit.\n", celsius, fahrenheit);
    
    return 0;
}