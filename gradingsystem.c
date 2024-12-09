#include <stdio.h>

int main() {
  int marks;

  printf("Enter your marks(0-100): ");
  scanf("%d", &marks);

  if (marks >= 90 && marks <= 100) {
    printf("distinction\n");
  } else if (marks >= 75 && marks <= 90) {
    printf("Grade A\n");
  } else if (marks >= 60 && marks <= 75) { 
    printf("Grade B\n");
  } else if (marks >= 50 && marks<=60) {
    printf("Grade C\n");
  } else if (marks > 100) {
    printf("invalid \n");
  } else {
    printf("failed,better luck next time\n");
  }

  return 0;
}