#include <stdio.h>

//Compiler version gcc  6.3.0

int main()

{

  int a,b,lcm;

  printf("enter 2 number");

  scanf("%d%d",&a,&b);

  for(int i=1;i<=a*b;i++){

    if(i%a==0&&i%b==0){

      lcm=i;

      break;

    }

  }

  printf("%d",lcm);

  return 0;

}
