#include<iostream>
using namespace std;
struct node {
int data;
node *next;
}*top=NULL;

void push(int x) {
node *t=new node;
if(!t) cout<<"Stack overflow" ;
else {
    t->data=x;
    t->next=top;
    top=t;

}
}
int pop(){
int x=-1;
if(!top) cout<<"stack underflow";
else {
    node *p=top;
    x=p->data;
    top=top->next;
    delete p;
}
return x;
}
void display(){
node *p=top;
while(p) {
    cout<<p->data<<" ";
    p=p->next;
}
}
int peek(int pos){
node *p=top;
int x=-1;
for(int i=0;i<pos-1;i++)p=p->next;
if(p){
    return x=p->data;
}
else
{
    return x;
}

}


int main()
{
push(1);
push(2);
push(3);
pop();
push(4);
push(5);
push(6);
display();
cout<<endl;
cout<<peek(6);
}
