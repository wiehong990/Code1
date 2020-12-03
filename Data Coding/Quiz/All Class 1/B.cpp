#include<stdio.h>

int main (){
	int a=0,b=0;
	scanf("%d %d",&a,&b);
	if(a%10!=0){
		printf("%d%d\n",a%10,b/10);
	}
	else{
		printf("%d\n",b/10);
	}
	return 0;
}
