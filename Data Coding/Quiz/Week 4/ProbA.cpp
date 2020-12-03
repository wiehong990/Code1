#include<stdio.h>

int main (){
	int a=0,b=0,c=0;
	scanf("%d",&a);
	for(b=1;b<=a;b++){
		scanf("%d",&c);
		printf("Case #%d: ",b);
		if(c<=1439 && c>=0){
		printf("%02d:%02d\n",c/60,c%60);
		}
	}
	return 0;
}
