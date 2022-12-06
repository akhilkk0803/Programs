#include<iostream>
#include<string>
using namespace std;
int main(){
	string a;
	cin>>a;
	int h[24];
	for(int i=0;i<24;i++) h[i]=0;
	for(int i=0;a[i]!='\0';i++){
		int x[24];
	for(int j=0;j<24;j++) x[i]=0;
	x[0]=1;
	x[i]=x[i]<<(a[i]-97);
	if(x[i]&h[i]>0){
		cout<<"duplicated is "<<a[i];
	}	
	else {
		x[i]|h[i];
	}
	}
	
}