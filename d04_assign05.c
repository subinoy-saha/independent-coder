#include <stdio.h>
int main() {
  //============================================================================================================================
  // Finding Largest of three numbers using nested if-else
  //============================================================================================================================
  int a, b, c;
  printf("Enter three numbers: ");
  scanf("%d %d %d", &a, &b, &c);
  if (a > b) {
    if (a > c) {
      printf("%d is the largest number\n", a);
    } else {
      printf("%d is the largest number\n", c);
    }
  } else {
    if (b > c) {
      printf("%d is the largest number\n", b);
    } else {
      printf("%d is the largest number\n", c);
    }
  }
  //============================================================================================================================
  // Write a program that takes the month number as input and prints the number of days in that month. Use switch statement to solve this problem.
  //============================================================================================================================
  int month;
  printf("Enter your month number: ");
  scanf("%d", &month);
  switch (month) {
  
     case1:
     printf("Jan has 31 days\n");
     break;
     case2:
     printf("Feb has 28 days\n");
     break;
     case3:
     printf("Mar has 31 days\n");   
     break;
     case4:
     printf("Apr has 30 days\n");
     break;
     case5:
     printf("May has 31 days\n");
     break;
     case6:
     printf("June has 30 days\n");
     break;
     case7:
     printf("July has 31 days\n");
     break;  
     case8:
     printf("Aug has 31 days\n");
     break;
     case9:
     printf("Sep has 30 days\n");
     break;
     case10:
     printf("Oct has 31 days\n");
     break;
     case11:
     printf("Nov has 30 days\n");
     break;
     case12:
     printf("Dec has 31 days\n");
     break;
     default:
     printf("Invalid input!\n");
     break;
 }
  //============================================================================================================================
  //Grade Calculation using if-else ladder
  //============================================================================================================================
  int marks;
  printf("Enter your marks: ");
  scanf("%d", &marks);
  if (marks >= 90) {
    printf("Grade: A\n");
  } else if (marks >= 80) {
    printf("Grade: B\n");
  } else if (marks >= 70) {
    printf("Grade: C\n");
  } else if (marks >= 60) {
    printf("Grade: D\n");
  } else {
    printf("Grade: F\n");
  }
  
  return 0;
}