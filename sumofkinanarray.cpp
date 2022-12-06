#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	int k;
	cout<<"enter the sum";
	cin>>k;
	for(int i=0;i<n;i++)cin>>a[i];
	int low=*min_element(a,a+n);
	int high=*max_element(a,a+n);
	int h[high+1];
	for(int i=low;i<=high;i++) h[i]=0;
	for(int i=0;i<n;i++){
		if(k-a[i]>0){
		if(h[k-a[i]]>0){
			printf("%d + %d is %d",a[i],k-a[i],k);
		}
		}
		h[a[i]]++;
	
	}
	}