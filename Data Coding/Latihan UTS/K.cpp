#include<stdio.h>

int main (){
	int a,b,c;
	scanf("%d",&a);
	for(b=1;b<=a;b++){
		scanf("%d",&c);
		printf("Case #%d: ",b);
		printf("%02d:%02d\n",c/60,c%60);
	}
	return 0;
}
