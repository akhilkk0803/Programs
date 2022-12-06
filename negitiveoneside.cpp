#include<bits/stdc++.h>
using namespace std;


int main(){
	int n=8;
int arr[8] = {1,-1,3,2,-7,-5,11,6};
	  int a[n],i,j=0;
	  for(int m=0;m<n;m++)a[m]=0;
	  for( i=0;i<n;i++) {
	  	if(arr[i]>0) {
	  		a[j]=arr[i];
	  		j++;
		  }
	  }
	  
	  
	  for(int k=0;k<n;k++){
	  	if(arr[k]<0) {
	  		a[j]=arr[k];
	  		j++;
		  }
	  }
	  for(auto x:a)cout<<x<<" ";
	  	  
   }
