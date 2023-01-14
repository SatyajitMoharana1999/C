#include<stdio.h>
int main(){
  int number;
  int sum;
  printf("Enter a Number");
  scanf("%d",&number);
  while(number>=10){
    sum=0;
    for(int i=number;i>0;i=i/10){
      sum=sum+number%i;
    }
    number=sum;
  }
  printf("Addition upto one digit : %d",number);
  return 0;
}
