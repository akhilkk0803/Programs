#include<iostream>
using namespace std;
template<class T>
class arithmetic {
	private: T a;
	T b;
	public:
	arithmetic(T a,T b);
	T add();
	T sub() ;
	
};

template <class T>
arithmetic<T>::arithmetic(T a,T b){
	this->a=a;
	this->b=b;
}
template<class T>
T arithmetic<T>:: add(){
	T c=a+b;
	return c;
}
template <class T>
T arithmetic<T>::sub(){
	T c=a-b;
	return c;
}
int main(){
	int n1,n2;
	cout<<"Enter two int numbers";
	cin>>n1>>n2;
	arithmetic<int> a(n1,n2);
	cout<<"sum is"<<a.add()<<endl<<"differnce is"<<a.sub();
	cout<<"enter two float numbers";
	float x,y;
	cin>>x>>y;
	arithmetic<float> a1(x,y);
	cout<<"sum is "<<a1.add()<<"differnce is"<<a1.sub();
}