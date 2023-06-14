#include<stdio.h>
int main(void){
  int i,j,a,b,c,t=0,sum=0;

  printf("hohaba");
  scanf("%d",&a);
  printf("1pponikakaruzikann");
  scanf("%d",&b);
  printf("mokutekitimadenokyori");
  scanf("%d",&c);


  for(;;){
    for(j=1;j<=5;j++){
    if(j==1 || j==2 || j==3){
    sum+=a;
    }else{
      sum-=a;
    }
    t+=b;
    
    printf("合計距離%d\n合計時間%d\n",sum,t);
    if(sum>=c)
      break;
    
  }
    if(j==5)
      j==0;
    if(sum>=c)
      break;
  }
  

  return 0;
}

    
