#include<stdio.h>
int main(void){
  float a,c,f;
  char b;

  printf("F or C\n");
  scanf("%c",&b);

  printf("suuzi=");
  scanf("%f",&a);

  switch(b){
  case 'F':
    c=(a-32)/1.8;
    printf("%fC\n",c);
    break;
  case 'C':
    f=a*1.8+32;
    printf("%fF\n",f);
    break;
  default:
    printf("単位記号の指定表示に誤りがあります\n");
  }

  return 0;
}

    
  

  
