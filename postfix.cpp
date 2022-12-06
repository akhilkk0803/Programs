#include<bits/stdc++.h>
using namespace std;
stack<char> st;
int instack(char x){
if(x=='+'||x=='-') return 2;
else if(x=='*'||x=='/') return 4;
else if(x=='^') return 5;
else if(x=='(') return 0;
else if(x==')') return -1;
else return -1;
}
int outstack(char x){
if(x=='+'||x=='-') return 1;
else if(x=='*'||x=='/') return 3;
else if(x=='^') return 6;
else if(x=='(') return 7;
else if(x==')') return 0;
else return -1;
}
int isOperand(char x){

if(x=='+'||x=='-'||x=='*'||x=='/'||x=='^'||x=='('||x==')') return 0;
else return 1;
}
char * post(char *s){
    char *postfix;
    int ln=strlen(s);
    int i=0,j=0;
    postfix =new char[ln+2];
    while(s[i]!='\0')
    {
        if(isOperand(s[i])) postfix[j++]=s[i++];
        else
        {
            if(instack(st.top())<outstack(s[i])) st.push(s[i++]);
            else if(instack(st.top())>outstack(s[i]) &&instack(st.top())<=0) st.pop();
            else if(instack(st.t op())>outstack(s[i]) &&instack(st.top())>0) {
                postfix[j++]=st.top();
                st.pop();
            }
        }
    }
    while(!st.empty()) {
        postfix[j++]=st.top();
        st.pop();
    }
    return postfix;
}

int main(){
char *s="((a+b)*c)-d^e^f";
st.push('#');
char *postfix=post(s);
cout<<postfix;

}
