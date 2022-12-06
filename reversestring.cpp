// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;

void swap(char *a,char *b){
    char temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void reverse(string s,int i,int j){
    if(i>=j)   {
	cout<<s;
	return;
	}
    else {
        swap(&s[i],&s[j]);
        reverse(s,++i,--j);
    }
}
int main() {
    // Write C++ code here
    string s;
    cin>>s;
    
    reverse(s,0,s.length()-1);
  

    return 0;
}