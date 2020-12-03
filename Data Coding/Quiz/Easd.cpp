#include <stdio.h>
#include <math.h>

int data[1001];
int a;

void read(){
	FILE *in = fopen("testdata.in", "r");
	while(!feof(in)){
		fscanf(in,"%d\n",&data[a]);
		a++;
	}
	printf("Special sum of %d datas is ",a);
	fclose(in);
}

void rumus(){
	int count;
	int temp = 0;
	for ( int i=0; i<a; i++){
		count =sqrt(data[i]);
		if ( count *count == data[i]){
			data[i] = data[i] - (2*data[i]);
		}
		temp = temp + data[i];
	}
	printf("%d.\n", temp);
	}

int main(){
 
	read();
	rumus();
	return 0;
}
