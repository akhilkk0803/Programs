#include<iostream>
using namespace std;
struct rectangle {
	int length;
	int breadth;
};
int main(){
struct rectangle *p;
//p=&r;
//p->length=20;
//cout<<r.length;	

//dynamically
p=new rectangle;
p->length=20;
cout<<(*p).length;

}