#include<iostream>
using namespace std;
int main(){
	int a=10;
	int b=30;
	int &r=a;
	r=b;
//	r=50;
	cout<<a<<endl;
	cout<<r<<endl;
	cout<<&r<<endl;
	cout<<&a;
}