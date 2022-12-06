#include<iostream>
#include<string>
using namespace std;

int main(){
	string s1,s2;
	cin>>s1>>s2;
	int i;
	int h[26];
	for(i=0;i<26;i++) h[i]=0;
	for( i=0;s1[i]!='\0';i++)
	{
		h[s1[i]-97]+=1;
	}
	for(i=0;s2[i]!='\0';i++){
		h[s2[i]-97]-=1;
		if((h[s2[i]-97])<=-1) {
			cout<<"not an anagram";
			exit(0);
		}
	}
	
	if(s2[i]=='\0') cout<<"it is anagram";
}