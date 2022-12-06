#include<iostream>
int main(){
	int n;
	std::cin>>n;
	int a[n];
	for(int i=0;i<n;i++)std::cin>>a[i];
	int h[n]={};
	for(int i=0;i<n;i++){
		h[a[i]]+=1;
	}
	int count=0;
	for(int i=0;i<n;i++){
		if(h[i]>0){
		std::cout<<i;
		}
	}
	}

	       