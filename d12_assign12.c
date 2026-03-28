// #include <stdio.h>

// void pointer_copy(char *dest, const char *src) {
//     while ((*dest++ = *src++));
// }

// int main() {
//     char source[] = "Hello World, I am your creator/n Don't angry me.";
//     char destination[50];

//     pointer_copy(destination, source);

//     printf("Source: %s\n", source);
//     printf("Copied: %s\n", destination);

//     return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void pointer_copy(char *dest, const char *src) {
    while ((*dest++ = *src++));
}

int main() {
    char source[100];
    char destination[100];

    printf("Enter a string: ");
    
    if (fgets(source, 100, stdin)) {
        
        char *ptr = source;
        while (*ptr != '\0') {
            if (*ptr == '\n') {
                *ptr = '\0';
                break;
            }
            ptr++;
        }

        pointer_copy(destination, source);

        printf("\nOriginal: [%s]\n", source);
        printf("Copied:   [%s]\n", destination);
    }
    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main() {
    
    char students[5][50]; 
    
    printf("Enter names for 5 students:\n");

    for (int i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        

        if (fgets(students[i], 50, stdin)) {
            
            
            char *ptr = students[i]; 
            while (*ptr != '\0') {
                if (*ptr == '\n') {
                    *ptr = '\0'; 
                    break;
                }
                ptr++;
            }
        }
    }

    printf("\n--- Student List ---\n");

    
    for (int i = 0; i < 5; i++) {
        printf("Name %d: %s\n", i + 1, students[i]);
    }

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main() {
    int matrix[3][3];
    int i, j;

    
    printf("Enter elements for a 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    
    printf("\nThe 3x3 Matrix is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            
            printf("%d\t", matrix[i][j]);
        }
        
        printf("\n");
    }

    return 0;
}