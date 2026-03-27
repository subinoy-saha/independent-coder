#include <stdio.h>

// void swap(int *a, int *b) {
//     int temp;
//     temp = *a;   
//     *a = *b;     
//     *b = temp;  
// }

// int main() {
//     int x, y;
//     printf("enter x and y: ");
//     scanf("%d %d", &x, &y);


//     printf("Before:\n");
//     printf("x = %d, y = %d\n", x, y);

//     swap(&x, &y);

//     printf("After:\n");
//     printf("x = %d, y = %d\n", x, y);

/////////////////////////////////////////////////////////////////////////////////////////////


// int Largest(int arr[], int n) {
//     int i;
//     int max = arr[0];  

//     for (i = 1; i < n; i++) {
//         if (arr[i] > max) {
//             max = arr[i];
//         }
//     }

//     return max;
// }

// int main() {
//     int n;
//     printf("Enter size: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter %d numbers:\n", n);
//     for(int i = 0 ; i < n ; i++) {
//         scanf("%d", &arr[i]);
//     }

//     int largest = Largest(arr, n);

//     printf("Largest element = %d\n", largest);

    /////////////////////////////////////////////////////////////////////////////////////////


int my_strlen(char *s) {
    char *start = s;   

    while (*s != '\0') {  
        s++;
    }

    return s - start;  
}

int main() {
    char str[] = "Hello World";

    int len = my_strlen(str);

    printf("Length of string = %d\n", len);

    return 0;
}
