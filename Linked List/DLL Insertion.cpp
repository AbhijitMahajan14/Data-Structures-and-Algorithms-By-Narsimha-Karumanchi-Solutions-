#include<stdio.h>
#include<stdlib.h>


struct Node {
	int data;
	struct Node* next;
	struct Node* prev;
};

struct Node* head;


struct Node* getNewNode(int x){
	
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = x;
	newNode->prev=NULL;
	newNode->next=NULL;
	return newNode;
}

void  insertAtHead(int x){
	struct Node* newNode = getNewNode(x);
	
	if(head==NULL)
	{
		head=newNode;
		return;
	}
	
	newNode->next=head;
	head->prev=newNode;
	head=newNode;
}

void print(){
	
	struct Node* temp=head;
	printf("Forward: ");
	while(temp != NULL){
		printf("%d ",temp->data);
	    temp=temp->next; 		
	} 
	printf("\n");	
}

void reverse(){
	struct Node* temp=head;
	if(temp==NULL) return;
	
	while(temp->next != NULL){	
	temp=temp->next;	
	}
	printf("Reverse: ");
	while(temp != NULL){
		printf("%d ",temp->data);
		temp=temp->prev;
	}
	printf("\n");
}

int main()
{
head = NULL;
insertAtHead(1);print();reverse();
insertAtHead(2);print();reverse();
insertAtHead(3);print();reverse();
insertAtHead(4);print();reverse();

	
}
