#include<stdio.h>

int main (){
	int n;
	scanf("%d",&n);
	if(n<=3 && n>=1){
		if(n==1){
			printf("I love fruit\n");
		}
		else if(n==2){
			printf("I love vegetable\n");
		}
		else if(n==3){
			printf("No comment\n");
		}
	}
	return 0;
}

