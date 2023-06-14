#include<stdio.h>
int main(void){
  int y,n,s=0,t=0,N;

  scanf("%d",&n);
  N=n+n;
  y=n*n+1;


  do{

    printf(" ");
    s++;
    if(y==s-1){
      printf("*\n");
      s=0;
      n=n-1;
      y=n*n;
      t++;
    }

    
  }while(t<=N);

  

  
  return 0;
}
