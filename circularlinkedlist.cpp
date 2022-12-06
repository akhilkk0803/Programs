#include<iostream>
using namespace std;

struct node{
	int data;
	node *next;
}*head=NULL;

void create(int a[],int n){
	int i;
	node *t,*last;
	head =new node;
	head->data=a[0];
	head->next=head;
	last=head;
	for(i=1;i<n;i++){
		t=new node;
		t->data=a[i];
		t->next=last->next;
		last->next=t;
		last=t;
	}
}
void display(node *p){
	do{
		cout<<p->data<<" ";
		p=p->next;
	}while(p!=head);
	cout<<endl;
}
void rdisplay(node *p){
	static int flag=0;
	if(p!=head ||flag==0){
		flag=1;
		cout<<p->data<<" ";
		display(p->next);
	}
}
void insert(int pos,int x){
	node *t,*p;
	if(pos==0){
		t=new node;
		t->data=x;
		if(head->next==NULL){
			head=t;
			head->next=head;
		}
		else {
			p=head;
			while(p->next!=head) p=p->next;
			p->next=t;
			t->next=head;
			head=t;
		}
	}
	else 
	{p=head;
		t= new node;
		t->data=x;
		for(int i=0;i<pos-1;i++) p=p->next;
	t->next=p->next;
	p->next=t;
	}
}

int del(int pos){
	node *p,*q;
	int x;
	if(pos==1){
		p=head;
		x=head->data;
		while(p->next!=head) p=p->next;
		x=p->data;
		if(p==head) {
			delete head;
			head=NULL;
		}
		else {
			p->next=head->next;
			delete head;
			head=p->next;
		}
	}
	else {
		p=head;
		for(int i=0;i<pos-2;i++)p=p->next;
		q=p->next;
		p->next=q->next;
		x=q->data;
		delete q;
	}
	return x;
}

int main(){
	int a[]={2,3,4,5,6};
	create(a,5);
	display(head);
	rdisplay(head);
	insert(2,7);
	insert(3,9);
	display(head);
	del(1);
	display(head);
}