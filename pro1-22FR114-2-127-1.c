#include<stdio.h>
#include<math.h>
int main(void){
  double f1,f2,x1=4,x2=40,x3=1;

  while(fabs(x2-x1)>=0.001){
    f1=pow(x1,3)-5*x1-2;
    f2=3*pow(x1,2)-5;
    x3=-f1/f2+x1;
    x2=x1;
    x1=x3;
  }
  printf("%lf\n",x2);
  return 0;
}

  
