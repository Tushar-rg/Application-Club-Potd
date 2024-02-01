#include<stdio.h>
#include<stdlib.h>

struct node {
	int info;
	struct node *next;
};

void printll(struct node *start){
	struct node *p;
	p=(struct node *)malloc(sizeof(struct node));
	p=start;
	if(!p) printf("List empty");
	while(p){
		printf("%d ",p->info);
		p=p->next;
	}
	printf("\n");
}

void insertatbeg(struct node *start,int data){
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->info=data;
	newnode->next=start;
	start=newnode;
}

int main(){
	struct node *nd,*start;
	nd=(struct node *)malloc(sizeof(struct node));
//	nd->info=10;
//	nd->next=NULL;
	start=NULL;
	printll(start);
	insertatbeg(start,50);
	printll(start);
	insertatbeg(start,60);
	printll(start);
	insertatbeg(start,70);
	printll(start);
	insertatbeg(start,80);
	printll(start);
}
