#include<bits/stdc++.h>
using namespace std;

void merge(int a[],int m,int b[],int n,int c[])
{
	int i=0;
	int j=0;
	int k=0;
	while(i<m&&j<n){
		if(a[i]<b[j]){
			c[k++]=a[i++];
		}
		else {
			c[k++]=b[j++];
		}
	}
	for(;i<m;i++){
		c[k++]=a[i];
	}
	for(;j<n;j++){
		c[k++]=b[j];
	}
}


int main(){
int m=5,n=5;
int a[m]={1,3,5,7,9};
int b[n]={2,4,6,8,10};
int c[m+n];

merge(a,m,b,n,c);
	for(auto x:c){
	cout<<x<<" ";
}
}