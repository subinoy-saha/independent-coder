#include <stdio.h>
int sumOfDigits(int num) {
    if (num < 0) {
        num = -num; 
    }

    int sum = 0;
    while (num > 0) {
        sum += num % 10; 
        num /= 10;       
    }

    return sum;
}

int main() {
    int number;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    printf("Sum of digits of %d is: %d\n", number, sumOfDigits(number));

// /////////////////////////////////////////////////////////////////////////////

// float celsiusToFahrenheit(float celsius) {
//     return (celsius * 9.0f / 5.0f) + 32.0f;
// }

// int main() {
//     float celsius;

//     printf("Enter temperature in Celsius: ");
    
//     if (scanf("%f", &celsius) != 1) {
//         printf("Invalid input. Please enter a numeric value.\n");
//         return 1;
//     }

//     float fahrenheit = celsiusToFahrenheit(celsius);
//     printf("%.2f C = %.2f F\n", celsius, fahrenheit);

// /////////////////////////////////////////////////////////////////////////////////


// int globalVar = 100;

// void demoFunction() {
    
//     int localVar = 20;

//     printf("Inside function:\n");
//     printf("  Global: %d\n", globalVar);
//     printf("  Local:  %d\n", localVar);


//     if (1) {
//         int blockVar = 5;
//         printf("Inside block: %d\n", blockVar);
        
    
//         printf("local from block: %d\n", localVar);
//     }
 
// }

// int main() {
//     demoFunction();

//     printf("\nInside main:\n");
//     printf("  Global: %d\n", globalVar);

    return 0;
}
