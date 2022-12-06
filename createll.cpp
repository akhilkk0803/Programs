#include<bits/stdc++.h>
using namespace std;
class node {
public:
int data;
node *next;
node(int val) {
data=val;
next=NULL;
}
};
void InsertAtTail(node *&head,int val) {
node *n=new node(val);
if(head==NULL) {
    head=n;
    return;
}
else {
    node *last=head;

while(last->next) {
    last=last->next;
}
last->next=n;
}
}
void InsertAthead(node *&head,int val){
node *n=new node(val);
n->next=head;
head=n;
}
 void display(node *head) {
node *temp=head;
while(temp) {
cout<<temp->data;
temp=temp->next;
}
}

int main() {
node *head=NULL;
InsertAtTail(head,1);
InsertAtTail(head,2);
InsertAthead(head,0);InsertAthead(head,6);
InsertAtTail(head,7);
display(head);
cout<<endl;
node *second=NULL;
InsertAthead(second,0);
InsertAtTail(second,1);
InsertAtTail(second,2);
InsertAtTail(second,3);
InsertAtTail(second,4);
display(second);
}
