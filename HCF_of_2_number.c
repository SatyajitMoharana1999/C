#include<stdio.h>
int main(){
  int a,b;
  int hcf;
  int sml;  //for storing the smaller number
  printf("Enter first number");
  scanf("%d",&a);
  printf("Enter second number");
  scanf("%d",&b);
  sml=a<b?a:b;
  for(int i=sml;i>=1;i--){
    if(a%i==0&&b%i==0){
      hcf=i;
      break;
    }
  }
  printf("HCF of %d and %d is %d",a,b,hcf);
  return 0;
}
