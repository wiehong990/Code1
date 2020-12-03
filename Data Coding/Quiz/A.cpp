#include<stdio.h>

int main (){
	int x,y,z,i=100000,flag;
	long long int a,b,c,d;
	scanf("%d",&z);
	for(y=1;y<=z;y++){
		printf("Case #%d:",y);
		scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
		flag=0;
		for(x=0;x<i;x++){
			if((a*x+b)%d==c){
				flag=1;
				break;
			}
		}
		if(flag==1){
			printf(" YES\n");
		}
		else{
			printf(" NO\n");
		}
	}
	return 0;
}
