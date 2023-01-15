#include<studio.h>
int main(){
  int a,b,c;
  printf("Enter value for a");
  scanf("%d",&a);
  printf("Enter value for b");
  scanf("%d",&b);
  printf("Before swapping a=%d  b=%d",a,b);
  c=a;
  a=b;
  b=c;
  printf("After swapping a=%d  b=%d",a,b);
  return 0;
}
