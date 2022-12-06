#include<iostream>
using namespace std;


int sortunion(int a[],int m,int b[],int n)
{
	int i=0,j=0,k=0,c[10000];
	while(i<m&&j<n){
		  while((a[i]==a[i+1]))i++;
            while((b[j]==b[j+1]))j++;
		if(a[i]<b[j]){
			c[k++]=a[i++];
		}
		else if(a[i]>b[j]){
			c[k++]=b[j++];
		}
	else{
	c[k++]=a[i++];
	j++;	
	}
	}
	for(;i<m;i++) {
		 while(a[i]==a[i+1])i++;
		c[k++]=a[i];
	}
	for(;j<n;j++) {
		 while(b[j]==b[j+1])j++;
		c[k++]=b[j];
	}
	for(int d=0;d<k;d++)
{
	cout<<c[d]<<" ";
}
}


int main(){
	int m=14;
	int a[m]={1,2,10,10,10,11,12,12,13,14,14,14,14,14};
	int n=9;
	int b[n]={2,3,5,6,6,7,8,9,10};
	
sortunion(a,m,b,n);

}