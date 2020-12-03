#include<stdio.h>
#include<stdlib.h>

struct data{
	int key;
	struct data *next,*prev,*temp;
}*head,*tail,*curr;

void pushD(int insertedKey){
	curr = (struct data*)malloc(sizeof(struct data));
	curr = head;
	curr->key = insertedKey;
	if(head == NULL){
		head = tail = curr;
	}
	else{
		
	}
}

void pushB(int insertedKey){
	curr = (struct data*)malloc(sizeof(struct data));
	curr->key = insertedKey;
	if(head == NULL){
		head = tail = curr;
	}
	else{
		tail->next = curr;
		curr = tail
	}
}

int main(){
	
}
