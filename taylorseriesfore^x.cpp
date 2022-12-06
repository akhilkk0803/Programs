#include<iostream>
using namespace std;
double e(int x,int n){
	static double f=1,p=1;
	double r;
	if(n==0){
		return 1;
	}
	else {
		r=e(x,n-1);
		p=p*x;
		f=f*n;
		return (r+(p/f));
	}
}



int main(){
double b=e(1,10 );
cout<<b;	
}