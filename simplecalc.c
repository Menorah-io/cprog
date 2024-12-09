#include<stdio.h>
int main(){
  int num,num2,choice;
  while(1){
    printf("enter your choice:\n");
    printf("1.add\n");
    printf("2.sub\n");
    printf("3.multiply\n");
    printf("4.division\n");
    printf("5.mod\n");
    printf("6.exit\n");
    scanf("%d",&choice);
    if (choice==6){
      break;
    }
    printf("enter two numbers:");
      scanf("%d%d",&num,&num2);
        
    switch(choice){
      case 1:
        
      printf("sum:%d\n",num+num2);
      break;
      case 2:
      printf("sub:%d\n",num-num2);
      break;
      case 3:
      printf("multiply:%d\n",num*num2);
      case 4:
      if(num2==0){
        printf("no zero");
      } else {
        printf("division:%d\n",num/num2);
      }
      case 5:
      if(num2==0){
        printf("error");
      } else {
        printf("mod:%d\n",num%num2);
      }
      break;
      default:
      printf("invalid choice\n");
   }
  }
  return 0;
}