#include<stdio.h>
#include<string.h>

int main (){
	int a,b,c,d=0,e=0,f=0,g=0,h;
	char t[11];
	scanf("%d",&a);
	for(b=1;b<=a;b++){
		printf("Case #%d:\n",b);
		scanf("%d",&c);
		for(d=0;d<c;d++){
			scanf("%s",&t[d]);
//			while(t[d]='c'){
//				e++;
//			}
		}
//		if(e>f || e>g){
//			printf("chocolate\n");
//		}
//		else if(f>e || f>g){
//			printf("strawberry\n");
//		}
//		else if(e==f || e==g || f==g){
//				printf("strawberry");
//				printf("vanila");
//		}
		for(d=0;d<c;d++){
			printf("%s",t[d]);
		}
		}
	return 0;
}
