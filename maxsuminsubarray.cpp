#include<bits/stdc++.h>
using namespace std;



int main(){
	int n;
	cin>>n;
	int a[n];
	int currentsum=0;
	int maxsum=INT_MIN;
	for(int i=0;i<n;i++)cin>>a[i];
for(int i=0;i<n;i++){
	currentsum+=a[i];
	if(currentsum<0){
		currentsum=0;
	}
	maxsum=max(currentsum,maxsum);
}
cout<<maxsum;
}