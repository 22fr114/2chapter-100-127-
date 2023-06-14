#include<stdio.h>
int main(void){
  int i,j;
  for(i=0;i<5;i++){
    for(j=0;j<100;j++){
      if(j<=5)
      printf("\%d ",j);
    }
    printf("\n");
  }
}

