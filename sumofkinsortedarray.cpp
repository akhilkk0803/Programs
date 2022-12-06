#include<iostream>
using namespace std;



int main() {
	int n,k;
	cin>>n;
	cout<<"enter the sum";
	cin>>k;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int i=0;
	int j=n-1;
	while(i<j){
		if(a[i]+a[j]==k) {
			printf("%d + %d = %d",a[i],a[j],k);
			i++;
			j++;
		}
		else if(a[i]+a[j]<k){
			i++;
		}
		else {
		j--;
		}
	}
}