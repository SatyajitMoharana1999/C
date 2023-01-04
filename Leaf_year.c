#include<stdio.h>

int main(){

  int year;

  printf("enter year");

  scanf("%d",&year);

  if(year%4==0){

    printf("%d is a leaf year",year);

   }

  else{

    printf("%d is not a leaf year",year);

   }

  return 0;

}
