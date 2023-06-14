#include<stdio.h>
int main(void){
  int a,i,t=9;


  for(i=1;i<=9;i++){
    printf(" ");
  }

  printf("*\n");
    

  while(a!=0){
    printf("4=left;6=right\n");
    scanf("%d",&a);
    
    if(a==4 && t!=0){
      t--;
      for(i=1;i<=t;i++){
	printf(" ");
      }}else if(a==6 && t!=19){
	     t++;
	for(i=1;i<=t;i++){
	  printf(" ");
	}
    }else{
      for(i=1;i<=t;i++){
	printf(" ");
      }
    }
    
      printf("*\n");
      
  }
  return 0;
}
