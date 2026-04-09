#include <stdio.h>

// void countCalls() {
    
//     static int counter = 0; 
    
//     counter++;
//     printf("Function execution count: %d\n", counter);
// }

// int main() {
//     countCalls(); 
//     countCalls(); 
//     countCalls(); 
//     countCalls(); 
//     countCalls(); 

////////////////////////////////////////////////////////////////////////

// int main() {

//     int result = 100;

//     printf("Starting value in outer block: %d\n", result);

    
//     {
//         int bonus = 50; 
//         result += bonus;
//         printf("Added %d, result is now: %d\n", bonus, result);
//     } 


//     {
//         int penalty = 20;
//         result -= penalty;
//         printf("Subtracted %d, result is now: %d\n", penalty, result);
//     }

    
//     {
//         result *= 2;
//         {
//             result += 5; 
//             printf("Doubled and added 5, result: %d\n", result);
//         }
//     }

//     printf("\nFinal value in outer block: %d\n", result);

////////////////////////////////////////////////////////////////////////////


#include <time.h>

#define ITERATIONS 1000000000

int main() {
    clock_t start, end;
    double cpu_time_used;


    int i; 
    start = clock();
    for (i = 0; i < ITERATIONS; i++) {}
    
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Time for Normal Variable:   %f seconds\n", cpu_time_used);

    
    register int j; 
    start = clock();
    for (j = 0; j < ITERATIONS; j++) {}
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Time for Register Variable: %f seconds\n", cpu_time_used);

    return 0;
}