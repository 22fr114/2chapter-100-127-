#include<stdio.h>
int main(void){
  int q=1,i,n,r,p=1;
  
  scanf("%d%d",&n,&r);

  if(n>=r){

  for(i=1;i<=n;i++){
    p*=i;
  }

  for(i=1;i<=n-r;i++){
    q*=i;
  }

  
  
  printf("%d\n",p/q);
  }
  return 0;
}
