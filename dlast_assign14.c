#include <stdio.h>

int main() {

    FILE *fp;
    
    char line[256];

    fp = fopen("record.txt", "r");

    if (fp == NULL) {
        printf("File not found or cannot be opened.\n");
        return 1; 
    }

    
    while (fgets(line, sizeof(line), fp)) {
        printf("%s", line);
    }

    fclose(fp);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int age;
    float score;


    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter score: ");
    scanf("%f", &score);

    fp = fopen("record.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }


    fprintf(fp, "%s %d %.2f\n", name, age, score);
    fclose(fp);
    printf("\nData saved to record.txt\n");


    char rName[50];
    int rAge;
    float rScore;

    fp = fopen("record.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }


    if (fscanf(fp, "%s %d %f", rName, &rAge, &rScore) == 3) {
        printf("\nData Read From File\n");
        printf("Name : %s\n", rName);
        printf("Age  : %d\n", rAge);
        printf("Score: %.2f\n", rScore);
    }

    fclose(fp);
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("data.txt", "r");

    if (fp == NULL) {
        
        fprintf(stderr, "Error: The file 'data.txt' could not be found.\n");
        
        return 1;
    }

    printf("File opened successfully!\n");
    fclose(fp);

    return 0;
}