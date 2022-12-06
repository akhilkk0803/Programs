#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	int low=*min_element(a,a+n);
	int high=*max_element(a,a+n);
	int h[high+1];
	for(int i=low;i<=high;i++) h[i]=0;
	for(int i=0;i<n;i++){
		h[a[i]]++;
	}
	for(int i=low;i<=high;i++){
		if(h[i]>1){
		
		printf("%d is appearing  %d times",i,h[i]);
	}
}}