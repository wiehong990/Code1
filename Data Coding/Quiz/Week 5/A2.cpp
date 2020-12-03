#include<stdio.h>

int main (){
	int a,i=0;
	int arr[10];
	scanf("%d",&a);
	for(i=0;i<a;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<a;i++){
		printf("%d",arr[i]);
	}
	return 0;
}

