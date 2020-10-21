
// C++ program to delete a node from
// Doubly Linked List
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

struct Node{
	
	int data;
	struct Node* next;
};

struct Node* top=NULL;

void push(int val)
{
	struct Node* temp=new Node();
	temp->data=val;
	temp->next=top;
	top=temp;
}

void pop()
{
struct Node* temp=new Node();
if(top==NULL) return;
temp=top;
top=top->next;
free(temp);	
}

void display()
{
	struct Node* temp=new Node();
	temp=top;
	while(temp->next!=NULL)
	{
		cout<<temp->data<<endl;
		temp=temp->next;
	}
}


int main()
{
 int ch, val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=4);
   return 0;	
}
