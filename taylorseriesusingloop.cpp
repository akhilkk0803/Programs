#include<iostream>
using namespace std;
double e(int x,int n){
	int i=1;
	double s=1,num=1,den=1;
	for(i=1;i<=n;i++){
		num*=x;
		den*=i;
		s+=(num/den);
	}
	return s;
}

int main(){
	cout<<e(1,10);
}