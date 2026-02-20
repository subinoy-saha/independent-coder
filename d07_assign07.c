#include <stdio.h>

int main() {
//   ==============================square(nxn)=============================================
   int i, j, k;
   printf("enter input for nxn: ");
   scanf("%d", &k);

   for(i=1; i<=k; i++) {
    for(j=1; j<=k; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    //==================================inverted============================================
    int l, m, n;
    printf("enter number: ");
    scanf("%d", &n);
    
    for(l=n; l>=1; l--) {
            for(m=1; m<=l; m++) {
                    printf("* ");
                }
                printf("\n");
            }
            printf("\n");
            
    //====================================inverted=========================================
    int i, j, n;
    printf("enter number: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++) {
        for(j=i; j<=n; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

 //====================================centered==========================================
    int i, j, k, n;
    printf("enter number: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++) {
        for(j=1; j<=n-i; j++) {
            printf(" ");
        }
        for(k=1; k<=2*i-1; k++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    
  //========================================number pattern===============================
    int i, j, n;
    printf("enter number: ");
    scanf("%d", &n);

    for(i=n; i>=1; i--) {
        for(j=1; j<=n+1-i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    printf("\n");
    
    //=============================sum except multiples of 5================================
    int sum = 0;

    for(int i=1; i<=100; i++) {

        if (i % 5 == 0) {
            continue;
        }
        sum += i;
    }
    printf("sum of 1 to 100 ,but skips multiples of 5: %d", sum);
    printf("\n");

    //===Find the first number divisible by both 7 and 13 between 1 and 500 (use break)====

    int i;
    for (i =1; i<= 500; i++) {

        if (i%7 == 0 && i%13 == 0) {
            break;
        }
        // else{
        //     continue;
        // }

    }
    printf("the number is: %d", i);
    printf("\n");
    
    //============all prime numbers between 1 and 50 (use break or continue)=============

    int num, i;

    printf("Prime numbers from 1 to 50 are:\n");

    for (num = 2; num <= 50; num++) {
        int isPrime = 1; 

        for (i = 2; i * i <= num ; i++) {
            if (num % i == 0) {
                isPrime = 0; 
                break;       
            }
        }

        if (!isPrime) {
            continue; 
        }

        printf("%d ", num); 
    }

    printf("\n");


    //=sum of positive numbers only from an array; stop if you encounter -1 (use break)=
    printf("--- Section 3: For Loop - Array Summation ---\n");
    
    int sum = 0;
    int array[] = {10, 50, 26, 87, -1, 54, 63};
    printf("Summing array: ");
    for (int i = 0; i < 7; i++) {
        if (array[i]<0) {
            break;
        }
        else{
        sum += array[i];
        printf("%d ", array[i]);
        }
    }
    printf("\nTotal: %d\n\n", sum);
    printf("\n");

    return 0;
}


