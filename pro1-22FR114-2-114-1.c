
#include<stdio.h>
int main(void){
  char c;
  scanf("%c",&c);

  if('A' <= c && c <='Z')
    printf("%c:%x →%c:%x\n",c,c,c+32,c+32);
  else
    printf("%c;%x\n",c,c);

  return 0;

}
