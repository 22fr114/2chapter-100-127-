#include<stdio.h>
int main(void){
  int t,i,j,s;


  for(i=2;i<100;i++){
    s=0;
    for(j=2;j<i;j++){
      if(i%j==0){
	s=1;
      break;
      }
    }
    if(s==0){
      t=i%10+i/10;
    if(t%2==0)
      printf("%d\n",i);
    }
  }
  
  return 0;
}
