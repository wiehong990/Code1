#include<stdio.h>

int main(){
	int a,b,c,n,m,x,y;
	scanf("%d",&a);
	for(b=1;b<=a;b++){
		printf("Case #%d:\n",b);
		scanf("%d %d",&n,&m);
		for(x=1;x<=n;x++){
			for(y=1;y<=m;y++){
				if(x==1 || x==n || y==1 || y==m){
				printf("#");
				}
				else{
					printf(" ");
				}
			}
		printf("\n");
		}
	}
	return 0;
}
