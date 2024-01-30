#include<stdio.h>
#include<stdlib.h>

struct node {
	int info;
	struct node *next;
};

void insertatbeginning(struct node *start, int data){
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->info=data;
	temp->next=start;
	start=temp; 
}

void printList(struct node *start){
	struct node *p;
	p=(struct node *)malloc(sizeof(struct node));
	p=start;
	while(p!=NULL){
		printf("%d ",p->info);
		p=p->next;
	}
}

void createNode(){
	
}

void main(){
	int ch=0,val=0;
	struct node *start = NULL;
	start=(struct node *)malloc(sizeof(struct node));
	start->next=NULL;
	start->info=10;
	printf("enter choice: ");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			printf("enter value to insert: ");
			scanf("%d",&val);
			insertatbeginning(start,val);
			printList(start);
	}
}
