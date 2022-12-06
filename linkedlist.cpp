#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *next;
}*first=NULL,*second=NULL,*third=NULL;
void create(int a[],int n){
	struct node *t,*last;
	first=new node;
first->data=a[0];
	first->next=NULL;
	last=first;
	for(int i=1;i<n;i++){
		t=new node;
		t->data=a[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
}
void create2(int a[],int n){
	struct node *t,*last;
	second=new node;
second->data=a[0];
	second->next=NULL;
	last=second;
	for(int i=1;i<n;i++){
		t=new node;
		t->data=a[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
}

int middle(node *p) {
	node *q;
	q=p=first;
	while(q) {
		q=q->next;
		if(q) q=q->next;
		if(q) p=p->next;
	}
	return p->data;
}
//displaying all the elements
void display(node *p){
	while(p!=NULL){
		cout<<p->data<<" ";
		p=p->next;
}
cout<<endl;
}

//countin no of elements in a linked list
int count(node *p){
	int l=0;
	while(p){
		l++;
		p=p->next;
	}
	return l;
}
//finding sum of all the elements in a linked list
int sum(node *p){
	int s=0;
	while(p){
		s+=p->data;
		p=p->next;
	}
	return s;
}
int max(node *p){
	int maximum=INT_MIN;
	while(p){
		maximum=max(maximum,p->data);
		p=p->next;
	}
	return maximum;
}
node* linearsearch(node *p,int key){
	while(p){
		if(p->data==key)return p;
		p=p->next;
	}
	return NULL;
}
node* movetofront(node *p,int key){
	node *q=NULL;
	while(p){
		if(p->data==key){
			q->next=p->next;
			p->next=first;
			first=p;
		}
		q=p;
		p=p->next;
	}
}
void insert(node *p,int pos,int x){
	node *t;
	if(pos<0||pos > count(p)) return;
	else if(pos==0){
		t=new node;
		t->data=x;
		t->next=first;
		first=t;

	}
	else {
		p=first;
		for(int i=0;i<pos-1&&p;i++) p=p->next;
		if(p){
		t=new node;
		t->data=x;
		t->next=p->next;
		p->next=t;
	}
}
}
void insertlast(node *p,int x){
	node *t;
	node *last;
	while(p) {
		last=p;
		p=p->next;
	}
	t=new node;
	t->data=x;
	t->next=NULL;
	if(first==NULL) first=last=t;
	else {
		last->next=t;
		last=t;
	}
}
void sortinsert(node *p,int x){
	node *q=NULL;
	node *t;
	t=new node;
	t->data=x;

	while(p&&p->data<x){
		q=p;
		p=p->next;
	}
	t->next=q->next;
	q->next=t;
}
int del(node *p,int pos){
	node *q=NULL;
	int x=1;

	if(pos==1){
		q=first;
		x=first->data;
		first=first->next;
		delete q;
		return x;
	}
	else {for(int i=0;i<pos-1&&p;i++){
		q=p;
		p=p->next;
	}
	if(p){
		q->next=p->next;
		x=p->data;
		delete p;
		return x;
	}

	}
}
bool checksorted(node *p){
	int x=INT_MIN;
	while(p){
		if(p->data<x)return false;
		else {
			x=p->data;
			p=p->next;
		}
	}
	return true;
}
void removeduplicates(node *p){
	node *q=first->next;
	while(p){
		if(p->data!=q->data){
			p=q;
			q=q->next;
		}
		else {
			p->next=q->next;
			delete q;
			p=p->next;
		}
	}
}
void reverse(node *p){
	node *q=NULL,*r=NULL;
	while(p){
		r=q;
		q=p;
		p=p->next;
		q->next=r;
	}
	first=q;
}
void recursivereverse(node *q,node*p){
	if(p){
		reverse(p,p->next);
		p->next=q;
	}
	else {
		first=q;
	}
}
void concat(node *p,node *q){

	third=p;
	while(p->next){
		p=p->next;
	}
	p->next=q;

}

void merge(node *p,node *q){
	node *last;
	if(p->data<q->data){
		third=last=p;
	p=p->next;
	third->next=NULL;
	}
	else {
		third=last=q;
		q=q->next;
		third->next=NULL;
	}
	while(p&&q){
		if(p->data<q->data){
			last->next=p;
			last=p;
			p=p->next;
			last->next=NULL;

		}
		else {
			last->next=q;
			last=q;
			q=q->next;
			last->next=NULL;
		}
	}
	if(p) last->next=p;
	if(q)last->next=q;
}

bool isloop(node *f){
	node *p,*q;
	p=q=f;
	do{
		p=p->next;
		q=q->next;
		q=q?q->next:NULL;
	}while(p&&q&&p!=q);
	if(p==q) return true;
	else return false;
}
int main(){
	int a[]={10,20,30,40,50};
	create(a,5);
	display(first);
	cout<<"no of elements are "<<count(first)<<endl;
	cout<<"The sum of  elements are "<<sum(first)<<endl;
	cout<<"The max element in the linked list is "<<max(first)<<endl;
	if(linearsearch(first,5))
	cout<<"found"<<endl;
	else cout<<"not found"<<endl;
	movetofront(first,5);
	display(first);
	movetofront(first,4);
	display(first);
	insert(first,4,45);
	display(first);
	insertlast(first,55);
	display(first);
	sortinsert(first,35);
	display(first);
	cout<<del(first,3)<<" is deleted "<<endl;
	display(first);
if(checksorted(first)) cout<<"elements are sorted";
else cout<<"not sorted";

int b[]={10,20,30,30,40,40};
create(b,6);
display(first);
removeduplicates(first);
display(first);
reverse(first);
display(first);
recursivereverse(NULL,first);
int c[]={5,40,10,30,20};
int d[]={1,2,3,4,5};
create(c,5);
create2(d,5);
display(first);
display(second);
concat(second,first);
display(third);
int m[]={10,20,30,40,50};
int n[]={5,15,25,35,45};
create(m,5);
create2(n,5);
merge(first,second);
display(third);
//checking for loop;
int e[]={10,20,30,40,50};
create(e,5);
struct node *t1,*t2;
//t1=first->next->next;
//t2=first->next->next->next->next;
//t2->next=t1;
//if(isloop(first)) cout<<"it is in loop";
//else cout<<"it is not in loop";
insert(first,2,8);

display(first);
cout<<"middle is "<<middle(first);

}
