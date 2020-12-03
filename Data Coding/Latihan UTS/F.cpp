#include<stdio.h>
#include<string.h>

int main (){
	char s[26]="I will become a good boy.";
	int a,b,c,d;
	scanf("%d",&a);
	for(b=1;b<=a;b++){
		printf("Case #%d:\n",b);
		scanf("%d",&d);
		for(c=0;c<d/2;c++){
			printf("%s\n",s);
		}
	}
	return 0;
}
//	bilangan komposit
