#include <iostream>
using namespace std;
int main(){

	int i,n,t;
	cin>>t;
	for(i=0;i<t;i++){
		int count=0;
		cin>>n;
		int a[n];
		for(int j=0;j<n;j++){
			cin>>a[j];
		}
		for(int k=0;k<n-1;k++){
			if(a[k]!=a[k+1]){
				count++;
				a[k+1]=a[k];
				if((k+2!=n)){
				if(a[k+1]!=a[k+2]){
					count++;
					a[k+2]=a[k+1];
				}
				}
			}
		}
		cout<<count<<endl;
	}
	
}