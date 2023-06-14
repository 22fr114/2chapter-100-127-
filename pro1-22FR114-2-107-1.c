#include<stdio.h>
int main(void){
  int a,b,r,tmp;

  printf("自然数＝");
  scanf("%d",&a);
  printf("自然数＝");
  scanf("%d",&b);

  if(a<b){

    tmp=a;
    a=b;
    b=tmp;

  }


  r=a%b;

  while(r!=0){
    a=b;
    b=r;
    r=a%b;
  }

  printf("最大公約数＝%d\n",b);

  return 0;

}
