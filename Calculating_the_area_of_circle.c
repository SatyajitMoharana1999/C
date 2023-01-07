#include<stdio.h>
int main(){
  float radius,area;
  printf("Enter the radius of the Circle");
  scanf("%f",&radius);
  area=3.141*radius*radius;
  printf("Area of the Circle is %.3f",area);
  return 0;
}
