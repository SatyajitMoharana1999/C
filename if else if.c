#include <stdio.h>

int main()
{
  int a,b;
  
  printf("enter the vallu of a");
  scanf("%d",&a);
  printf("enter the vallu of b");
  scanf("%d",&b);
  
  if(a<b)
  {
    printf("%d is gretter than %d",b,a);
  }
  else if(a>b)
  {
    printf("%d is smaller than %d",b,a);
  }
  else{
    printf("a is equal to b");
  }
  return 0;
}