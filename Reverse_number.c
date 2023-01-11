#include<stdio.h>
int main(){
  int input;
  int reminder;
  int reverse=0;
  printf("Enter any number");
  scanf("%d",&input);
  for(int i=input;i>0;i=i/10){
    reminder=i%10;
    reverse=reverse*10+reminder;
  }
  printf("%d",reverse);
  return 0;
}
