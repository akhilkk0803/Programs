#include <bits/stdc++.h>
using namespace std;
//void swap(int *a,int *b){
//	int temp;
//	temp=*a;
//	*a=*b;
//	*b=temp ;
//}
void separate(int a[],int n){
	
	int i=0;
	int j=n-1;
	while(i<j){
		while(a[i]<0)i++;
		while(a[j]>=0)j--;
		if(i<j){
			swap(a[i],a[j]);
		}
}


}


int main(){
	int n=6;
	int a[6]={-1,2,-5,6,-7,8};


	separate(a,n);
	for(auto x:a){
		cout<<x<<" ";
	}
}