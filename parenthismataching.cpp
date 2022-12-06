#include<iostream>
using namespace std;
struct node {
char data;
node *next;
}*top=NULL;

void push(char x) {
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
int isBalanced(char *exp){
for(int i=0;exp[i]!='\0';i++){
    if(exp[i]=='(') push(exp[i]);
    else if(exp[i]==')'){
        if(top==NULL) return 0;
        else pop();
    }
}
if(top==NULL) return 1;
else return 0;
}

int main(){
char *exp="((a+b)) *(c-d)";
cout<<isBalanced(exp);
}
