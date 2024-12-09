#include <stdio.h>

int main() {
  int num, i = 0, sum = 0;

  printf("Enter a num: ");
  scanf("%d", &num);
  do {
    sum += i;
    i++;
  } while (i <= num);

  printf("Sum of first %d natural numbers is %d\n", num, sum);

  return 0;
}