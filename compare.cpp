#include<iostream>
#include<string>
using namespace std;

int main(){
	string s1,s2;
	cin>>s1;
	cin>>s2;
	for(int i=0;s1[i]!='\0';i++){
		if(s1[i]!=s2[i]){
			cout<<"not equal";
			exit(0);
		}
	}
	cout<<"equal"; 
}