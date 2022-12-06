#include<iostream>
using namespace std;
struct Stack {
int size;
int top;
int *s;
};
void create(Stack *st){
cout<<"enter Size";
cin>>st->size;
st->top=-1;
st->s=new int[st->size];
}
void display(Stack st)
{int i;
for(int i=st.top;i>=0;i--) {
    cout<<st.s[i]<<" ";
}
cout<<endl;
}

void push(Stack *st,int x)  {
if(st->top==st->size-1) cout<<"stack overflow";
else {
    st->top++;
    st->s[st->top]=x;
}
}
int pop(Stack *st) {
int x=-1;
if(st->top==-1) cout<<"stack underflow";
else {
    x=st->s[st->top];
    st->top--;
}
return x;
}
int peak(Stack st,int pos){ int x=-1;
if(st.top-pos+1<0) cout<<"invalid postion";
else {
    x=st.s[st.top-pos+1];

}
return x;
}
int stacktop(Stack st) {
if(st.top==-1) return -1;
else return st.s[st.top];
}
int isEmpty(Stack st) {
if(st.top==-1) return 1;
}
int  IsFull(Stack st) {
if(st.top==st.size-1) return 1;

}
int main() {
Stack st;
create(&st);
push(&st,10);
push(&st,20);
push(&st,30);
display(st);
cout<<pop(&st)<<"is deleted"<<endl;;cout<<pop(&st)<<"is deleted"<<endl;;
cout<<pop(&st)<<"is deleted"<<endl;;
cout<<pop(&st)<<"is deleted"<<endl;;
push(&st,10);
push(&st,20);
push(&st,30);
display(st);
cout<<endl;
cout<<peak(st,4);
cout<<endl;
cout<<IsFull(st);
cout<<endl;
//cout<<isEmpty(st);

}

