#include<stdio.h>

int main(){
	int x,y[1000],h,a,b,c,d,n;
	scanf("%d",&x);
	for(a=0;a<x;a++){
  		scanf("%d",&n);
  		for(c=0;c<n;c++){
   			scanf("%d",&y[c]);
  		}
  		printf("Case #%d:",a+1); 
  		for(c=0;c<n;c++){
  			for(d=0;d<n;d++){
   			 	if(y[c]<y[d]){
					h++;
   				}
 			}
 			printf(" %d",h+1);
  			h=0;
		}
 		printf("\n");
	}
	return 0;
}
