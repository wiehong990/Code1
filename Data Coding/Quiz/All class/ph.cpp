#include <stdio.h>

int main(){
	int t,n,i,o,e;
	int a,b=0;
	scanf("%d", &t);
	for(a=0;a<t;a++){
		scanf("%d", &n);
		for(b=0;b<n;b++){
			scanf("%d", &i);
			if (i % 2 == 1){
				o++;
			}
			if(i % 2 == 0){
				e++;
			}
		}
		printf("Odd group : %d integer(s).\n", o);
		printf("Even group : %d integer(s).\n", e);
		o=0;
		e=0;
		printf("\n");
	} 
}
