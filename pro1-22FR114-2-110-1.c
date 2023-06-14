
#include<stdio.h>
int main(void){
  int sum=0,a,b,c,d,e,f,g,h,i,j;



  for(a=1;a<=10;a++){
    if(a==10){
      printf("%d\n",a);
      sum+=1;
    }
    for(b=1;b<=9;b++){
      if(a+b==10){
	printf("%d %d\n",a,b);
	sum+=1;}
      for(c=1;c<=8;c++){
	if(a+b+c==10){
	  printf("%d %d %d\n",a,b,c);
	  sum+=1;}
	for(d=1;d<=7;d++){
	  if(a+b+c+d==10){
	    printf("%d %d %d %d\n",a,b,c,d);
	    sum+=1;}
	  for(e=1;e<=6;e++){
	    if(a+b+c+d+e==10){
	      printf("%d %d %d %d %d\n",a,b,c,d,e);
	      sum+=1;}
	    for(f=1;f<=5;f++){
	      if(a+b+c+d+e+f==10){
		printf("%d %d %d %d %d %d\n",a,b,c,d,e,f);
		sum+=1;}
	      for(g=1;g<=4;g++){
		if(a+b+c+d+e+f+g==10){
		  printf("%d %d %d %d %d %d %d\n",a,b,c,d,e,f,g);
		  sum+=1;}
		for(h=1;h<=3;h++){
		  if(a+b+c+d+e+f+g+h==10){
		    printf("%d %d %d %d %d %d %d %d\n",a,b,c,d,e,f,g,h);
		    sum+=1;}
		  for(i=1;i<=2;i++){
		    if(a+b+c+d+e+f+g+h+i==10){
		      printf("%d %d %d %d %d %d %d %d %d\n",a,b,c,d,e,f,g,h,i);
		      sum+=1;}
		    for(j=1;j<=1;j++){
		      if(a+b+c+d+e+f+g+h+i+j==10){
			printf("%d %d %d %d %d %d %d %d %d %d\n",a,b,c,d,e,f,g,h,i,j);
			sum+=1;
			}
		    }
		  }
		}
	      }
	    }
	  }
	}
      }
    }
  }

  printf("%d\n",sum);
  return 0;
}

    
