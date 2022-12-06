#include<bits/stdc++.h>

using namespace std;

int main(){
//
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

// ANOTHER METHOD SIMPLER THAN THE PREVIOUS ONE

//
//int i,j,k,l;
//int n=s1.length()+1;
//for(i=0;i<s1.length()-1;i++){
//	for(j=0;j<n;j++){
//		cout<<" ";
//	}
//	for(k=0;k<i;k++){
//		cout<<s1[k];
//	}
//	for(l=k;l>=0;l--){
//		cout<<s1[l];
//	}
//	n--;
//	cout<<endl;
//}

}


