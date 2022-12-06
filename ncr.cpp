#include<iostream>
using namespace std;

int ncr(int n){
	if(n<=0){
		return 1;
	}
	else {
		return ncr(n-1)*n;
	}
}
int pascals (int n,int r){
	if(r==0 || r==n){
		return 1;
	}
	else {
		return pascals(n-1,r-1)+pascals(n-1,r);
	}
}

int main(){
	int n=5,r=3;
	int b= ncr(n)/(ncr(r)*ncr(n-r));
	cout<<b;
int c=pascals(n,r);
cout<<c;
}