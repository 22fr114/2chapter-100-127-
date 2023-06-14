#include<stdio.h>
int main(void){
  int m,i,sum=0;

  for(i=1;i<=12;i++){
    printf("%d月",i);
    scanf("%d",&m);
    sum+=m/2;
  }


  printf("%d\n",sum);

  return 0;
}

    
  
