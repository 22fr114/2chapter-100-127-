#include<stdio.h>
#define PI(r)   (r*r*3.14)
int main(void){
  float a,r,i;


  while(a!=0){
    printf("円の半径を入力してください\n");
    scanf("%f",&r);
    printf("%f\n",PI(r));
    printf("もう一度計算しますか？はい：１　いいえ：０\n");
    scanf("%f",&a);
    
  }

  return 0;
}


