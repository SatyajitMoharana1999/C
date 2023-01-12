#include<stdio.h>
int main(){
  int number;
  int sum=0;
  printf("Enter any posetive number");
  scanf("%d",&number);
  for(int i=number;i>0;i=i/10){
    sum=sum+i%10;
  }
  printf("Sum of digits %d",sum);
}
