#include<bits/stdc++.h>
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
int pre(char x){
if(x=='+'||x=='-') return 1;
else if(x=='*'|| x=='/') return 2;
return 0;
}
int isOperand(char x)
{if(x=='*'||x=='+'||x=='-'||x=='/') return 0;

return 1;
}

char *post(char *infix){

char *postfix;
int len=strlen(infix);
postfix=new char[len+2];
int i=0,j=0;
while(infix[i]!='\0')
{
    if(isOperand(infix[i])) postfix[j++]=infix[i++];
    else {
        if(pre(infix[i])>pre(top->data))
        {
            push(infix[i++]);
        }
        else {
            postfix[j++]=pop();
        }
    }
}
    while(top!=NULL){
        postfix[j++]=pop();
    }
    postfix[j]='\0';
return postfix;
}


int main(){
char *infix="a+b+c*d";
push('#');
char *postfix=post(infix);
cout<<postfix;
}
