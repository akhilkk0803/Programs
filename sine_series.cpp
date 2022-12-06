#include<iostream>
using namespace std;
int sin(int x,int n){
	static int f=1,p=1,i=1;
	int r;
	if(n==1){
		return x;
	}
	else {
		r=sin(x,n-2);
		p=p*x*x*x;
		f=f*(n-1)*n;
		if(i%2!=0){
			i++;
			return (r-p/f);
		}
		else {
			i++;
			return (r+p/f);
		}
	}
}


int main(){
	int x=(45);
	int b=sin(x,5);
	cout<<b;
}