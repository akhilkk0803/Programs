#include<iostream>
using namespace std;
int search(int a[],int n,int key){
	for(int i=0;i<n;i++){
		if(a[i]==key){
			return i;
		}
	}
	return 0;
}

int main(){
	
	int n;
	cout<<"enter the size of array";
	cin>>n;
	int a[n],key;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Enter the element to be searched";
	cin>>key;
	int b=search(a,n,key);
	if(b>0){
		cout<<"The element was found at "<<b<<" index";
	}
	else {
		cout<<"the element is not present"; 
	}
}