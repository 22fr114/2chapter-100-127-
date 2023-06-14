#include<stdio.h>
int main(void){
  int n,i,m,sum=0;

  scanf("%d",&n);

  for(i=1;i<=n;i++){

    scanf("%d",&m);

    sum+=m;

  }
  printf("平均値%d\n個数%d\n合計点%d\n",sum/n,n,sum);

  return 0;
}

