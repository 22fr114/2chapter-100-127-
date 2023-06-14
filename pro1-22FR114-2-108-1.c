#include<stdio.h>
#define F(x)   (1/x*x+1)
int main(void){
  float n,k,sum;

  scanf("%f",&n);


  for(k=1;k<=n;k++){
    sum+=(F(k-1/n)+F(k/n))/n/2;
  }
    printf("%f\n",sum);
 


  return 0;
}

  
    
