#include<iostream>
#include<string>
using namespace std;
int main(){
	// no of words
	string a="how are   you";
	int word=1;
	for(int i=0;a[i]!='\0';i++){
		if(a[i]==' '&&a[i-1]!=' '){
			word++;
		}
	}
	cout<<word;
} 