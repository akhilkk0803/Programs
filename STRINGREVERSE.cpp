#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	cin>>s;		
	int i,j,k;
	char t;
	for( k=0;s[k]!='\0';k++);
	for(i=0,j=k-1;i<=j;i++,j--){
		t=s[i];
		s[i]=s[j];
		s[j]=t;
	}
	cout<<s;
}
