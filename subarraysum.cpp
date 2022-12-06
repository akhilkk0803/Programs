#include<iostream>

using namespace std;
int main(){
	
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int s;
	cin>>s;
        for(int i=1;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum=sum+a[j];
                if(sum==s){
                cout<<i<<" "<<j;
				exit(0);	
				} 
                 if(sum>s)break;   
            }
        }
}