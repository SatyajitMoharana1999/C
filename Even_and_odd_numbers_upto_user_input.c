#include<stdio.h>
int main(){
  int user_input;
  int even;
  int odd;
  printf("enter range");
  scanf("%d",&user_input);
  printf("Even numbers  :");
  for(int i=2;i<=user_input;i=i+2){
     printf("%d ",i);
  }
  printf("\nOdd numbers :");
  for(int i=1;i<=user_input;i=i+2){
     printf("%d ",i);
  }
  return 0;
}
