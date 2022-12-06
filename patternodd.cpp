#include<iostream>

using namespace std;

int main(){
	int i,j;
	int n;
	cin>>n;
	int c=1;
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			if(j==0) {
				cout<<c<<" ";
                c+=2;
			}		
			else cout<<"1"<<" ";	
		}
		cout<<endl;
	}
}