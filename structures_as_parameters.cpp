#include<iostream>
using namespace std;
struct rectangle{
	int a[5];
	int b;
};
//void area (struct rectangle *r1){
//r1->l=40;
//r1->b=20;
//	
//	
//}
//int main(){
//	struct rectangle r2={10,20
//	};;
//	area(&r2);
//	cout<<r2.b<<r2.l;


//in heap 

//struct rectangle *fun(){
//	struct rectangle *p;
//	p=new rectangle;
//	p->l=70;
//	p->b=50;
//	return p;
//}
//int main(){
//	struct rectangle *ptr;
//	ptr=fun();
//	cout<<ptr->b<<ptr->l;


//arrays  as paramters
void area(struct rectangle r1){
	for(int i=0;i<5;i++){
		cout<<(r1.a[i])*(r1.b)<<endl;
	}
}
int main(){
	struct rectangle r={{1,2,3,4,5},20
	};
	area(r);
	}





