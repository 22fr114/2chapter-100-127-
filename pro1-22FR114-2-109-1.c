#include<stdio.h>
int main(void){
  int i,m,t;

  scanf("%d",&m);

    

  t=m/10000;
  printf("10000=%d\n",t);
  t=m%10000;
  
  m=t/5000;
  printf("5000=%d\n",m);
  m=t%5000;
  
  t=m/1000;
  printf("1000=%d\n",t);
  t=m%1000;
  
  m=t/500;
  printf("500=%d\n",m);
  m=t%500;
  
  t=m/100;
  printf("100=%d\n",t);
  t=m%100;
  
  m=t/50;
  printf("50=%d\n",m);
  m=t%50;
  
  t=m/10;
  printf("10=%d\n",t);
  t=m%10;

  
  m=t/5;
  printf("5=%d\n",m);
  m=t%5;
  
  t=m/1;
  printf("1=%d\n",t);

  return 0;
  }
  
  
  
