#include<stdio.h>

int main (){
	int a=0,b=0,c=0,d,e,j=0;
	scanf("%d",&a);
	for(b=1;b<=a;b++){
		scanf("%d %d %d",&c,&d,&e);
		printf("Case #%d: ",b);
		do{
			j = c/2;
			j++;
		}while(j==d);
		for(j=1;j<=c;j++){
			j = j + 1;
		}
		printf("%d",j);
		
	}
	return 0;
}
