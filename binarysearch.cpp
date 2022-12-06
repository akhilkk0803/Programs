#include<bits/stdc++.h>
using namespace std;

int search(int a[],int n,int key){
	int lb=0,ub=n-1,m;
	while(lb<=ub)
{
	m=(lb+ub)/2;
	if(a[m]==key){
	return m;
	}
	else if(a[m]<key){
		lb=m+1;
	}
	else {
		ub=m-1;
	}
	}
	return 0;
}

int rsearch(int a[],int lb,int ub,int key){
	while(lb<=ub){int m;
		m=(lb+ub)/2;
		if(a[m]==key){
			return m;
		}
		else if(key<a[m]) {
			return rsearch(a,lb,m-1,key);
		}
		else {
			 return rsearch(a,m+1,ub,key);
		}
	}
}
int main(){

	int n;
	cin>>n;
	int a[n],key;
	cout<<"Enter elements in ascending order";
	for(int i=0;i<n;i++)
{
	cin>>a[i];
	}
	cout<<"enter the element to be searched";
cin>>key;
//int b=search(a,n,key);
//if(b>0){
//	cout<<b;
//}
//else
//	cout<<"not found";
//}
int c=rsearch(a,0,6,key);
cout<<c;
}
