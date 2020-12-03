#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main (){
	FILE *e;
	char ch,buffer[32];
	int i=0,arr[100],j=0;
	e=fopen("knasjkndskjaksaddsaksakndks.txt","r");
	while(1){
		ch=fgetc(e);
		if(ch=EOF){
			break;
		}
		else if(ch == ' '){
			arr[j]=atoi(buffer);
			j++;
			bzero(buffer,32);
			i=0;
			continue;
		}
		else{
			buffer[i]=ch;
			i++;
			
		}
	}
	for(i=0;i<j;i++){
		printf("Number [%d] = %d\n",i,arr[i]);
	}
	return 0;
}
