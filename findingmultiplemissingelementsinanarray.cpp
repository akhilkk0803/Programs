#include <bits/stdc++.h>
using namespace std;

int main(){int n;
cout<<"enter the size ofelements";
cin>>n;
int a[n];
for(int i=0;i<n;i++){
	cin>>a[i];
}
int high=*max_element(a, a + n);
int h[high];
int l=*min_element(a, a + n);
for(int i=0;i<n;i++){
	h[a[i]]=1;
}
for(int i=l;i<=high;i++){
	if(h[i]!=1){
		cout<<i;
	}
}	
}