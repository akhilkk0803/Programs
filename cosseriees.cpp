#include<iostream>
using namespace std;

float cos(int x,int n){
	static float p=1,f=1;
	int i=1;
	float  r;
	if(n==0){
		return 1;
	}
	else {
		r=cos(x,n-2);
		p=p*x*x;
		f=f*(n-1)*n;
		if(i%2!=0){
			return (r-p/f);
		}
		else{
			return (r+p/f);
		}
	}
}


int main(){
	cout<<cos(45,2);
}