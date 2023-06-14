#include<stdio.h>
int main(void){
  int a,b;

  printf("当選番号\n");
  scanf("%d",&a);
  printf("自分の番号\n");
  scanf("%d",&b);

  if(a==b)
    printf("1等\n");
  if(a==b-1 || a==b+1)
    printf("前後賞\n");

  a=a%10;
  b=b%10;

  if(a==b)
    printf("2等\n");


  return 0;
}
