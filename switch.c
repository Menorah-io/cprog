#include <stdio.h>

int main()
{
  int marks;

  printf("Enter your marks(0-100): ");
  scanf("%d", &marks);
  switch (marks / 10)
  {
  case 10:
  case 9:
    printf("distinction\n");
    break;
  case 8:
  case 7:
    printf("Grade A\n");
    break;
  case 6:
    printf("Grade B\n");
    break;
  case 5:
    printf("Grade C\n");
    break;
  default:
    printf("failed,better luck next time\n");
  }
  return 0;
}
