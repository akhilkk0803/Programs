#include<iostream>
using namespace std;

int fib(int n){
	if(n<=1){
		return n;
	}
	else {
		return fib(n-2)+fib(n-1);
	}
}
int f[10];
int reduced_fib(int n){
	
	if(n<=1){
		f[n]=n;
		return n;
	}
	else {
		if(f[n-2]==-1){
			f[n-2]=reduced_fib(n-2);
		}
		if(f[n-1]==-1){
			f[n-1]=reduced_fib(n-1);
		}
		f[n]=f[n-2]+f[n-1];
		return f[n-2]+f[n-1];
	}
} 

int loop(int n){
	int t0=0,t1=1,s,i;
	if(n<=1){
		return n;
	}
for(i=1;i<n;i++)
{
		s=t0+t1;
		t0=t1;
		t1=s;
}
	
	return s;
}

int main(){
	int x=5;
//	cout<<fib(x);
for(int i=0;i<10;i++){
	f[i]=-1;
}
	cout<<reduced_fib(x);
//	cout<<loop(x);
}