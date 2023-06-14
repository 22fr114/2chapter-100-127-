#include<stdio.h>
int main(void){
  int a;
  


  printf("1. Airplane from Haneda to Itami.\n");
  printf("2. Shinkansen from Tokyo to Shin-Osaka.\n");
  printf("3. Local train from Tokyo to Osaka.\n");
  printf("4. Highway Bus from Tokyo to Osaka.\n");
  printf("5. Walking from Tokyo to Osaka.\n");
  printf("Which do you select? (1--5):\n");


  scanf("%d",&a);



  switch(a){
  case 1:printf("You will go to Itami by airplane.\n");
         break;
  case 2:printf("You will go to Shin-Osaka by sinkannsen.\n");
    break;
  case 3:printf("You will go to Osaka by local.\n");
    break;
  case 4:printf("You will go to Osaka by highway.\n");
    break;
  case 5:printf("You will go to Osaka by walking.\n");
    break;
  }

  return 0;

}
