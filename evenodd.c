#include<stdio.h>
int main(){
  int num;
  printf("enter a number:");
  scanf("%d",&num);
  if(num%2==0)
    printf("the given number is even");
  else
    printf("the given number is odd");
  return 0;
}