#include<bits/stdc++.h>
using namespace std;
int main() {
    int n=8,x=10;
    int a[n]={5,6,8,9,6,5,5,6};
int maxele=*max_element(a,a+n);
int minele=*min_element(a,a+n);

    int maxi=INT_MIN;
    int mini=INT_MAX;
    if(x>maxele) maxi=-1;
    else {
    for(int i=0;i<n;i++){
      {if(a[i]>maxi && a[i]<=x) maxi=max(maxi,a[i]);}
    }
    }
         if(x<minele) minele=-1;
    else {

    for(int i=0;i<n;i++){
       {  if(a[i]<mini && a[i]>=x) mini=min(mini,a[i]);}
    }
    }
    cout<<mini<<maxi;

}
