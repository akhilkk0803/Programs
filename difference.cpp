#include<iostream>
using namespace std;


int sortunion(int a[],int m,int b[],int n)
{
	int i=0,j=0,k=0,c[100];
	while(i<m&&j<n){
		if(a[i]<b[j]){
			c[k++]=a[i++];
		}
		else if(a[i]>b[j]){
		j++;
		}
	else{
i++;
	j++;	
	}
	}
	for(;i<m;i++) {
		c[k++]=a[i];
	}

	for(int d=0;d<k;d++)
{
	cout<<c[d]<<" ";
}
}


int main(){
	int n=5;
	int a[n]={3,4,5,6,10};
	int m=5;
	int b[m]={2,4,5,7,12};
	
sortunion(a,m,b,n);

}