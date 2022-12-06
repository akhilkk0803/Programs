#include<iostream>
#include<math.h>
using namespace std;
int power(int m,int n){
	if(n==0){
		return 1;
	}
	else {
		return power(m,n-1)*m;
	}
}
// it takes less no of multiplications to get the desired answer
int reduced_steps_power(int m,int n){
	if(n==0){
		return 1;
	}
	else if(n%2==0){
		return reduced_steps_power(m*m,n/2);
	}
	else {
		return  m*reduced_steps_power(m*m,(n-1)/2);
	}
}

int main(){
int b=	power(2,5);
int c=	power(2,5);


cout<<c; 
}