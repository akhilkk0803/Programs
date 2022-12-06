#include<iostream>
using namespace std;
class node{
public:
int data;
node *next;
};
class stack{
private:node *top;
public:stack() {
    top=NULL;
    }

void push(int x);
int pop();
void display();
int peek(int pos);
};
void stack::push(int x){
node *t=new node;
if(!t) cout<<"stack overflow";
else {
    t->data=x;
    t->next=top;
    top=t;
}

}
int  stack::pop(){
    int x=-1;
if(!top) cout<<"underflow";
else {
    node *p=top;
    top=top->next;
     x=p->data;
    delete p;
}
return x;
}
void stack::display(){
node *p=top;
while(p) {
    cout<<p->data<<" ";
    p=p->next;
}
}
int stack::peek(int pos){
node *p=top;
for(int i=0;i<pos-1;i++) p=p->next;
if(p){
        return p->data;
}
else {
    return -1;
}
}
int main(){
stack s1;
s1.push(1);s1.push(2);
s1.push(3);
s1.display();
cout<<s1.peek(2);
}
