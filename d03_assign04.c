#include <stdio.h>
int main (){
    // ========================================
    // QUESTION 1: Bit Extraction Function
    // ========================================
    unsigned char x = 0b10110101;   // 8-bit
    printf("x        = %u\n", x);
    printf("x >> 2   = %u\n", x >> 2);
    printf("x << 1   = %u\n", x << 1);
    printf("x & 0b00001111 = %u\n", x & 0b00001111);
    printf("x | 0b11110000 = %u\n", x | 0b11110000);

    // ========================================
    // QUESTION 2: Using scanf() to Read Input
    // ========================================
    int atoi(const char *str);

    char input1[100];
    char input2[100];
    
    printf("Enter a input 1: ");
    scanf("%s", input1);
    printf("Enter a input 2: ");
    scanf("%s", input2);
    printf("You entered: %s and %s\n", input1, input2);

    printf("Sum of your inputs: %d\n", atoi(input1) + atoi(input2));
    printf("Product of your inputs: %d\n", atoi(input1) * atoi(input2));
    printf("The result of  integer division: %.2f\n", (float)atoi(input1) / atoi(input2));
    printf("The reminder of integer division: %d\n", atoi(input1) % atoi(input2));

    // ========================================
    // QUESTION 3: Predicting Output of Expressions
    // ========================================
    int a = 7;
    float b = 2.0;
    float result1 = a / 2; // Integer division
    float result2 = (float)a / 2; // With cast
    float result3 = a / b; // Mixed types
    printf("%.1f %.1f %.1f\n", result1, result2, result3);

    // ========================================
    // QUESTION 4: Increment Operators in Expressions
    // ========================================
    unsigned char flags = 0b00000000;  // 8-bit flags variable
    flags = flags | (1 << 3);  /* Set bit 3 to 1 */
    printf("flags = %u\n", flags);
    flags = flags & ~(1 << 5);  /* Clear bit 5 to 0 */
    printf("flags = %u\n", flags);
    flags = flags ^ (1 << 2);  /* Toggle bit 2 */
    printf("flags = %u\n", flags);
    int result = (flags >> 4) & 1;
    printf("Bit 4 of flags is: %d\n", result);
    
    return 0;
}