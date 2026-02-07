#include <stdio.h>
int main () {
    //========================================
    // Count the number of digits in a number
    //========================================

    int n, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n == 0) {
        count = 1; // if the number is 0, it has 1 digit
        printf("Number of digits: %d\n", count);
    }
    else {
         while (n != 0) {
        n /= 10; // remove the last digit
        count++; // increment the count
    }
    printf("Number of digits: %d\n", count);
   }
    
    //===========================================
    // Reverse a number (not print, but reverse)
    //===========================================

    int num, reversed = 0;
    printf("Enter a number to reverse: ");
    scanf("%d", &num);
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    printf("Reversed number: %d\n", reversed);

    //===========================================
    // Find no. of odd and even digits in a number
    //===========================================

    int number, oddCount = 0, evenCount = 0;
    printf("Enter a number: ");
    scanf("%d", &number);

    int temp = number;
    if(temp == 0) {
        evenCount = 1; // if the number is 0, it has 1 even digit
        printf("Number of odd digits: %d\n", oddCount);
        printf("Number of even digits: %d\n", evenCount);
    } else {
    while (temp != 0) {
        int digit = temp % 10;
        if (digit % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
        temp /= 10;
    }

    printf("Number of odd digits: %d\n", oddCount);
    printf("Number of even digits: %d\n", evenCount);
}

    //===========================================
    // Find factors of a number
    //===========================================

    int numToFactor, i;
    printf("Enter a number to find its factors: ");
    scanf("%d", &numToFactor);
    printf("Factors of %d are: ", numToFactor);
    for (i = 1; i <= numToFactor; i++) {
        if (numToFactor % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}