#include<iostream>
using namespace std;
int sum(int n){
//	without using formula
//	if(n==0){
//		return 0;
//	}
//	else{
// 1+2+3+......(n-1)+n=sum(n-1)+n//
//		return sum(n-1)+n;
//	}
	// by using formula 
	return n*(n+1)/2;
}



int main(){
	int x;
	cin>>x;
	int b=sum(x);
	cout<<b;
}