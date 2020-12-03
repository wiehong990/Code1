#include<stdio.h>

int main (){
	char a[10],b[8],c[10],d[8],e[10],f[8];
	scanf("%[A-Z,a-z]%[0-9]%[A-Z,a-z]%[0-9]%[A-Z,a-z]%[0-9]",&a,&b,&c,&d,&e,&f);
	printf("%-11s%s\n",a,b);
	printf("%-11s%s\n",c,d);
	printf("%-11s%s\n",e,f);
	return 0;
}

