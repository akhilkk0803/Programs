#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	cin>>s;
//	for(int i=0;i<s.length();i++){int c=1;
//	for(int j=i+1;j<=s.length();j++){
//		if(s[i]!=-1){
//		if(s[i]==s[j]){
//			s[j]=-1;
//			c++;
//		}
//		}
//	}
//using hashtable
int h[26],i;
for( i=0;i<26;i++) h[i]=0;
for( i=0;s[i]!='\0';i++){
	h[s[i]-97]++;
}
for(i=0;i<26;i++){
	if(h[i]>1){
		printf("%c is appearing  %d times ",i+97,h[i]);
	}
}
}