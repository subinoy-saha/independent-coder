#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float gpa;
};

int main() {
    int n, i;
    int top = 0;

    printf("Enter the number of students: ");
    if (scanf("%d", &n) != 1)
    return 1; 

    struct Student s[n];

    for(i = 0; i < n; i++) {
        printf("\nDetails for Student %d\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]s", s[i].name); 

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("GPA: ");
        scanf("%f", &s[i].gpa);

        
        if (s[i].gpa > s[top].gpa) {
            top = i;
        }
    }


    printf("STUDENT WITH HIGHEST GPA:\n");
    printf("Name       : %s\n", s[top].name);
    printf("Roll No    : %d\n", s[top].roll);
    printf("Highest GPA: %.2f\n", s[top].gpa);


    return 0;
}

////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float gpa;
};

void StudentDetails(struct Student *ptr) {
    printf("\nStudent Record\n");
    printf("Name       : %s\n", ptr->name);
    printf("Roll Number: %d\n", ptr->roll);
    printf("GPA        : %.2f\n", ptr->gpa);
}

int main() {

    struct Student s1 = {"Alex Thorne", 101, 3.85};

    StudentDetails(&s1);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {

    struct Node node1, node2, node3, node4;

    node1.data = 10;
    node2.data = 20;
    node3.data = 30;
    node4.data = 40;

    node1.next = &node2; 
    node2.next = &node3; 
    node3.next = &node4;   
    node4.next = NULL;


    struct Node* ptr = &node1;

    printf("Linked List:\n");
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");

    return 0;
}