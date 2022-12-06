#include<iostream>
using namespace std;
 struct node {
 	node *prev;
 	int data;
 	node *next;
 }*first=NULL;
 void create(int a[],int n)  {
 	node *t,*last;
	 first=new node;
 	first->data=a[0];
 	first->prev=NULL;
 	first->next=NULL;
    last=first;
    for(int i=1;i<n;i++) {
    	t=new node;
    	t->data=a[i];
    	t->prev=last;
    	t->next=last->next;
    	last->next=t;
    	last=t;
	}
 }
void display(node *p){
	while(p) {
		cout<<p->data<<" ";
		p=p->next;
		
	}
	cout<<endl;
}
int length(node *p){
	int l=0;
	while(p) {
		l++;
		p=p->next;
	}
	return l;
}
void insert(node *p,int index ,int x){
	node *t;
	if(index <0 ||index >length(p)) {
		return ;
	}
		t=new node;
	if(index==0){
	
		t->data=x;
		t->prev=NULL;
		t->next=first;
		first->prev=t;
		first=t;
	}
		
	else {
		for(int i=0;i<index-1;i++){ p=p->next;}
		
			t->data=x;
			t->next=p->next;
			t->prev=p;
			if(p->next) p->next->prev=t;
			p->next=t;
			
		
	}
}
int del(node *p,int index) {
	int x;
	if(index<1) return 0 ;
	if(index==1) { p=first;
		first=first->next;
		 if(first) first->prev=NULL;
		x=p->data;
		delete p;
	} 
	else {
		for(int i=0;i<index-1;i++) {
			p=p->next;
		}
		p->prev->next=p->next;
		if(p->next) p->next->prev=p->prev;
		x=p->data;
		delete p;
	}
	return x;
}
void reverse(node *p) {
	node *temp;
	while(p){
		temp=p->next;
		p->next=p->prev;
		p->prev=temp;
		p=p->prev;
		if ( p!=NULL && p->next==NULL) first=p;
	}
}

int main(){
	int a[]={1,2,3,4,5};
	create(a,5);
	display(first);
	cout<<"the length is "<<length(first)<<endl;
	insert(first,5,6);
	display(first);
	del(first,1);
	display(first);
	reverse(first);
	display(first);
	
}