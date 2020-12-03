#include <stdio.h>
#include <string.h>

int main(){
	int length=0;
	char n[30];
	scanf("%s",n);
	length = strlen(n);
	while(length < 30){
		printf("0");
    	length = length + 1;
	}
	printf("%s\n",n);
}
