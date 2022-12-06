#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n=6;
    int a[n]={1,1,1,2,2,3};
     int max=*max_element(a,a+n);
    int min=*min_element(a,a+n);
int h[max+1]={};
for(int i=0;i<n;i++){
    h[a[i]]++;
}
for(int i=min;i<=max;i++)
{    for(int j=i+1;j<=max;j++)
    {
        if(h[j]==h[i]&&h[i]>0&&h[j]>0) {
            cout<<"no";
            exit (0);
        }

    }

}
cout<<"yes";

}

