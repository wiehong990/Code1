#include<stdio.h>

int main (){
	int a,b,c,i=0,e,sum;
	int t[10],q[10];
	scanf("%d",&a);fflush(stdin);
	for(b=1;b<=a;b++){
		printf("Case #%d: ",b);
		scanf("%d",&c);
		for(i=0;i<c;i++){
			scanf("%d",&t[i]);
		}
		for(i=0;i<c;i++){
			printf("%d ",t[i]);
		}
		
	}
	return 0;
}
