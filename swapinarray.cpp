#include<iostream>
using namespace std;


int main(){
int a[6]={1,2,3,4,5,6};
int n=6,temp;
for(int i=0;i<n/2;i++){
	temp=a[i];
	a[i]=a[n-i-1];
	a[n-i-1]=temp;
}
for(auto x:a){
	cout<<x;
}

}  