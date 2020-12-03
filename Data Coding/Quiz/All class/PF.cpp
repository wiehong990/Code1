#include<stdio.h>

int main(){
	int a,b,c,l,q,w,e=0;
	int t=0;
	char x[1000]={0};

	scanf("%d",&t);
	for (t=t;t>0;t--){
		scanf("%d",&q);
		scanf("%s",x);
		for(w=0;w<q;w++){
			if(x[w] == 'L'){
				l++;
			}
			if(x[w] == 'B'){
				b++;
			}
		}
		if (l>b){
			printf("Lili\n");
		}
		if (l<b){
			printf("Bibi\n");
		}
		if (l==b){
			printf("None\n");
		}
		b = 0; l = 0; w = 0; q = 0;
	}
}
