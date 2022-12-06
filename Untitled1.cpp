#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
//increasing
//for(int i=0;i<n;i++){
//	for(int k=0;k<n-i;k++){
//		cout<<" ";
//}
//	for(int j=0;j<=i;j++){
//		cout<<"*";
//	}
//	cout<<endl;
//}

//decreasing
for(int i=0;i<n;i++){
	for(int k=0;k<i;k++){
		cout<<" ";
	}
	for(int j=n;j>i;j--){
		cout<<"*";
	}
	cout<<endl;
}
}