#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////


int reverse(int num, int rev) {
    if (num == 0) {
        return rev;
    }

    return reverse(num / 10, (rev * 10) + (num % 10));
}

int main() {
    int number;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) return 1;

    if (number < 0) {
        printf("Reversed: -%d\n", reverse(-number, 0));
    } else {
        printf("Reversed: %d\n", reverse(number, 0));
    }
    
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////


void Numbers(int n) {
    if (n <= 0) {
        return;
    }

    Numbers(n - 1);

    printf("%d ", n);
}

int main() {
    int n;

    printf("Enter the value of N: ");
    if (scanf("%d", &n) != 1) 
    
    return 1;

    printf("Numbers from 1 to %d: ", n);
    Numbers(n);
    printf("\n");

    return 0;
}
