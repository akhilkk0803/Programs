#include<iostream>

int main(){
	int n;
	int m;
	std::cin>>n>>m;
	int a[n];
	int b[m];
	for(int i=0;i<n;i++)std::cin>>a[i];
	for(int j=0;j<m;j++)std::cin>>b[j];
	 int i=0,j=0,arr[m+n]={},k=0;
        while(i<n&&j<m){
            
            if(a[i]<b[j]) arr[k++]=a[i++];
            else if(a[i]<b[j]) arr[k++]=b[j++];
            else { arr[k++]=a[i++];
            j++;
            }
        }
        for(;i<n;i++)arr[k++]=a[i];
        for(;j<m;j++)arr[k++]=a[j];
        int count=0;
        for(auto x:arr)
		{if(x>0)
		count++;
		std::cout<<x<<" ";
		}
		std::cont<<endl;
		std::cout<< count;
}