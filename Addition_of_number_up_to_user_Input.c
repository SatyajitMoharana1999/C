#include<stdio.h>
int main(){
  int n;
  int sum=0;
  printf("enter any number");
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    sum+=i;
  }
  printf("sum = %d",sum);
}
