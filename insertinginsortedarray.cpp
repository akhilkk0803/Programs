#include <iostream>

using namespace std;


void insert(int a[],int n,int key)
{int i;
    for( i=n-1;a[i]>key;i--)
   {
       a[i+1]=a[i];
   }
   a[i+1]=key;
}

int main()
{
  int n,key;
  cin>>n;
  int a[n+1];
  for(int i=0;i<n;i++){
      cin>>a[i];
  }
  cout<<"Enter key";
  cin>>key;
insert(a,n,key);
for(auto x:a){
    cout<<x<<endl;
}
    return 0;
}
