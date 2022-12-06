#include<iostream>
#include<stack>
using namespace std;

int main(){
stack<int> stack1,stack2;
stack1.push(10);

stack1.push(20);

stack1.push(30);

stack1.push(40);
while(!stack1.empty()){
    cout<<stack1.top()<<" ";
    stack1.pop();

}
stack2.push(1);stack2.push(1);
stack2.push(1);
stack2.push(1);
while(!stack2.empty()){

    cout<<stack2.top();
    stack2.pop();
}

}
