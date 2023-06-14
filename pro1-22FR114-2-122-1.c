#include<stdio.h>
int main(void){
  float f,x,y;
  scanf("%f%f",&x,&y);

  f=(x-1)*(x-1)+(y-2)*(y-2);

  if(f<=9)
    printf("Inside\n");
  else
    printf("Outside\n");

  return 0;
}
