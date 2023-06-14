#include<stdio.h>
int main(void){
  int turuf,kamef,h,f,kame,turu,n;


  printf("atamanokazu");
  scanf("%d",&h);
  printf("asinokazu");
  scanf("%d",&f);


  turuf=2*h;
  n=f-turuf;
  kame=n/2;
  turu=h-kame;


  if((h==kame+turu)&&(f==2*turu+4*kame) && kame>=0 && turu>=0){
      printf("turu=%d\n",turu);
      printf("kame=%d\n",kame);
    }else{
    printf("ERROR\n");
  }
  return 0;
}
