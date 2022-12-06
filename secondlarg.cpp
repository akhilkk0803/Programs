#include<bits/stdc++.h>
using namespace std;


int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)cin>>a[i];
	int lar=INT_MIN;
	int seclar=INT_MIN;
	for(int i=0;i<n;i++){
		if(a[i]>lar){
			seclar=lar;
			lar=a[i];
		}
		else if(a[i]>seclar &&a[i]!=lar) seclar=a[i];
	}
	
	cout<<seclar;

}