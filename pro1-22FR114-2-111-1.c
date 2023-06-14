#include<stdio.h>
int main(void){
  float a;

  printf("何ｋｇ");
  scanf("%f",&a);
  if(0<=a && a<=2){
    printf("410円\n");
  }else if(a<=4){
    printf("530\n");
  }else if(a<=6){
    printf("650円\n");
  }else if(a<=8){
    printf("710円\n");
  }else if(a<=10){
    printf("770円\n");
  }else if(a<=12){
    printf("830円\n");
  }
  

  return 0;
}
