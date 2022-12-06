#include<bits/stdc++.h>
using namespace std;



int main(){
	int n;
	cout<<"enter the number of elements";
	cin>>n;
	int a[n],j;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0; i<n-1;i++){
		if(a[i]==a[i+1]){
			j=i+1;
			while(a[i]==a[j])j++;
			printf("%d is appearing %d  times\n",a[i],j-i);
			i=j-1;
		}
	}
}