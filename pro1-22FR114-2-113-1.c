#include<stdio.h>
int main(void){
  int x,y;

  scanf("%d%d",&x,&y);

  if(0<x && 0<y)
    printf("第1象限\n");
  if(0>x && 0<y)
    printf("第2象限\n");
  if(0>x && 0>y)
    printf("第3象限\n");
  if(0<x && 0>y)
    printf("第4象限\n");
  if(x==0 || y==0)
    printf("軸上\n");

  return 0;
}

  
