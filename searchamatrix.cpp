#include<bits/stdc++.h>

using namespace std;

int main(){
	int m,n;
	cout<<"enter no of rows and cols";
	cin>>m>>n;
	int a[m][n];
	cout<<"Enter the elements";
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
	cout<<a[i][j]<<" ";		
		}
		cout<<endl;
	}
	int key;
	cout<<"enter the ele to be searched";
	cin>>key;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
	if(a[i][j]==key){
		cout<<"the element is present at row"<<i+1<<"and col "<<j+1;
	}
		}
		
	}
}