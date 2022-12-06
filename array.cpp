#include<iostream>
using namespace std; 
int main(){
	int a[5] ={2,3,4,5};
//	cout<<sizeof(a);	
//	printf("%d",a[4]);
//	cout<<a[3]<<endl;
for (auto i:a){
	cout<<i;
}
}