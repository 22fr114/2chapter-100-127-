#include<stdio.h>
#include<math.h>
int main(void){
  int i,d,j;
  double rad,s;

  for(i=0;i<50;i++){

    d=i*10;

    rad=d*M_PI/180;

    s=sin(rad);

    for(j=-20;j<s*10;j++){
      printf(" ");
    }

    printf("*\n");
  }

  return 0;
}

