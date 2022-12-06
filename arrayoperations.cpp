#include<iostream>
using namespace std;
template<class T>
class array {
	private :
		T *a;
		int size;
		int length;
	public: array();
	array(int sz){
		length=0;
		size=sz;
		a=new T[sz];
	}
	~array(){
	delete []a;
	}
	void display();
	void insert(int index,T ele);
	void del(int index);
	int search(int key);
	T sum();
};

template<class T>
void array<T>::display(){
	for(int i=0;i<length;i++){
	cout<<a[i];	
	}
}
template<class T>
void array<T>::insert(int index,T ele){
	if(index>=0&&index<=length){
		for(int i=length;i>index;i--){
			a[i]=a[i-1];
		}
	}
	a[index]=ele;
	length++;
}
template<class T>
void array<T>::del(int index){
	if(index>=00&&index<length){
		for(int i=index;i<length-1;i++){
			a[i]=a[i+1];
		}
	length--;
	}
}

template<class T> 
T array<T>::sum(){
	int s=0;
	for(int i=0;i<length;i++){
		s=s+a[i];
	}
	return s;
}
template<class T> 
int array<T>::search(int key){
	for(int i=0;i<length;i++){
		if(a[i]==key){
			return i;
		}
	}
}


int main() {
	int size,ch;
	cout<<"enter the no of elements";
	cin>>size;
	array<int> arr(size);
	
	do
 {
 cout<<"\n\nMenu\n";
 cout<<"1. Insert\n";
 cout<<"2. Delete\n";
 cout<<"3. Search\n";
 cout<<"4. Sum\n";
 cout<<"5. Display\n";
 cout<<"6.Exit\n";
 
 cout<<"enter you choice ";
 cin>>ch;
 switch(ch){
 	case 1:{
		
	 int index,ele;
	  cout<<"enter index and the element";
 	cin>>index>>ele;
 	arr.insert(index,ele);
 	break;
 
 }
 case 2:{
 	int index;
 	cout<<"enter the index";
 	cin>>index;
 	arr.del(index);
	break;
 }
 case 3:{int ele;
 	cout<<"enter the elements to be searched";
 	cin>>ele;
 	int b=arr.search(ele);
 	cout<<"the element is found at "<<b<<endl;
 	
	break;
 }
 case 4:{
 	int c=arr.sum();
 	cout<<"the sum is "<<c<<endl;
	break;
 
 }
 case 5:{
 	arr.display();
	break;
 }
}
	
}while(ch<6);
}
