#include<bits/stdc++.h>
using namespace std;
stack<int>st;
int isOperand(char x){
if(x=='+'||x=='-'||x=='*'||x=='/'||x=='^'||x=='('||x==')') return 0;
else return 1;
}
int eval(char *s)
{
    int i,x1,x2,r;
    for(i=0;s[i]!='\0';i++)
    {
        if(isOperand(s[i]))
        {
            st.push(s[i]-'0');
        }
        else {
            x2=st.top();
            st.pop();
            x1=st.top();
            st.pop();
            switch(s[i])
            {
                case '+':r=x1+x2; break;
                 case '-':r=x1-x2; break;
                case '*':r=x1*x2; break;
                case '/':r=x1/x2; break;
            }
            st.push(r);
        }
    }
    return st.top();
}

int main()
{ char *s="234*+82/-";
cout<<eval(s);
}
