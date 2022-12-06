#include <iostream>

using namespace std;

void reverse(int a[],int n){
    
if(n<=0) return;
else {
    cout<<a[n-1];
    reverse(a,--n);
}



}


int main()
{int n=5;
    int a[n]={1,2,3,4,5};
    reverse(a,n);

    return 0;
}
