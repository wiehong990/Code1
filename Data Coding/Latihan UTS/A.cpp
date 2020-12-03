#include<stdio.h>

int main (){
	int a,b,c,d;
	scanf("%d",&a);
	for(b=1;b<=a;b++){
		printf("Case #%d:\n",b);
		scanf("%d",&c);
		for(d=c;d>0;d--){
			printf("%d",d);
			if(d==c || d==5 || d==10 || d==30 || d==60){
				printf(" SECONDS TILL NEW YEAR!!");
			}
			printf("\n");
		}
	}
	return 0;
}
