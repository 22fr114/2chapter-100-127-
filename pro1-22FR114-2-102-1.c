#include<stdio.h>
int main(void){
  float m=0,i=1,sum=0;



  while(sum<=1000000){
    m++;
    i*=1.05;
    sum+=i;
    
  }


  printf("%fヶ月\n",m);
  
  return 0;
}
