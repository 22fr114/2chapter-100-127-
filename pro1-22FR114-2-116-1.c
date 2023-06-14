#include<stdio.h>
int main (void){
  float x,y;

  scanf("%f",&x);
  scanf("%f",&y);

  if(2<x && x<3 && 0>y && y>x*x-5*x+6)
    printf("領域内\n");
  else
    printf("領域外\n");

  return 0;
}
