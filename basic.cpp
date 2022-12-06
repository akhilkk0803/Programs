#include<bits/stdc++.h>

using namespace std;

int main(){

string s1{};

getline(cin,s1);

int i,j,m,n;
n=s1.length();

//cout<<s1[0]<<endl;


for(i=0;i<s1.length();i++){
	for(m=0;m<=((n*n)/2)-i;m++){
		cout<<" ";
	}

for(j=0;j<i;j++){

cout<<s1.at(j);

}

for(int k=j;k>=0;k--){

cout<<s1.at(k);
}



cout<<endl;

}

}

