#include<bits/stdc++.h>
using namespace std;
void mer(int arr[],int lb,int mid,int ub){
	int n1=mid-lb+1 ;
	int n2=ub-mid;
	int a[n1],b[n2];
	 for(int i=0;i<n1;i++){
	 	a[i]=arr[i+lb];
	 }
	 for(int i=0;i<n2;i++){
	 	b[i]=arr[mid+1+i];
	 }
	 int i=0,j=0,k=lb;
	 while(i<n1 && j<n2){
	 	if(a[i]<b[j]) arr[k++]=a[i++];
	 	else if(a[i]>b[j]) arr[k++]=b[j++];
	 	else  {
		 arr[k++]=a[i++];
		 arr[k++]=b[j++];
		 }
	 }
	 
	 
	 for(;i<n1;i++) arr[k++]=a[i];
	 for(;j<n2;j++) arr[k++]=b[j];

	 }
void divide(int arr[],int lb,int ub){
	
	if(lb<ub){
int m=(lb+ub)/2;
		divide(arr,lb,m);
		divide(arr,m+1,ub);
		mer(arr,lb,m,ub);
		
	}
}

int main(){
	int n;
	cout<<"enter number of elements";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	divide(a,0,n-1);
	for(auto x:a) cout<<x;
}