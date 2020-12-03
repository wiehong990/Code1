#include <stdio.h>

int main(){
	int a, b, c, d, e, f, g = 0;
	scanf("%d", &a);
	
	for(e = 1; e <= a && a <= 10; e++){
		scanf("%d", &b);
		c = 0; d = 0; g = 0;
		int h[b];
		for (g = 0; g < b; g++){
			scanf("%d", &h[g]);
			if(g % 2 == 0 && h[g] % 2 == 0){
				c++;
			}
			if(g % 2 != 0 && h[g] % 2 != 0){
				d++;
			}
		}
		if(c % 2 == 0 && d % 2 == 0){
			printf("Case #%d: :)\n", e);
		}
		else if (c % 2 != 0 && d % 2 != 0){
				printf("Case #%d: :(\n", e);
		}
		else {
				printf("Case #%d: :|\n", e);
		}	
	}
}
