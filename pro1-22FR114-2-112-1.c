#include<stdio.h>
int main(void){
  double x[5]={0,7,14,18,20};
  double y[5]={2,4,6,10,4};
  double s[6]={0,1.1,2.7,3,4.7,5};
  double t[6]={3.9,6.8,1.2,3.9,2.6};
  double sum=0;
  int i;

  for(i=0;i<=4;i++){
    sum+=y[i]*(x[i+1]-x[i]);
  }

  printf("%f\n",sum/4);

  for(i=0;i<=5;i++){
    sum+=t[i]*(s[i+1]-s[i]);
  }

  printf("%f\n",sum/5);

  return 0;
}

