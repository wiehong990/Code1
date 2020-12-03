#include <stdio.h>

int main(){
	int n = 1, q = 0,counter = 1;
	scanf("%d", &q);
	while(counter <= q){
	n = n * 2 + 1;
	q--;
	}
	printf("%d\n", n);
}

