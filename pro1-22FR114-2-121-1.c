#include<stdio.h>
int main(void){
  int d[5] = {3,4,1,5,2};
  int N = 5;
  int i,j,k,v;
  for(i=1;i<N;i++){
    v=d[i];
    j=i;
    while(d[j-1]<v){
      d[j] = d[j-1];
      j--;
    }
    d[i] = v;
    for(k=0;k<N;k++)printf("%d ",d[k]);
    printf("\n");
  }
}
