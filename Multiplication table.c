#include<stdio.h>
int main(){
  int input;
  printf("Enter which multiplication table you want to see");
  scanf("%d",&input);
  for(int i=1;i<=10;i++){
    printf("%d * %d = %d\n",input,i,input*i);
    
  }
}
