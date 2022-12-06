#include<iostream>
using namespace std;
class rectangle {
	private:
		int length;
		int breadth;
		public: 
		rectangle(){
			length=1;
			breadth=1;
		}
		rectangle(int l,int b);
		int area();
		int changelength(int l);
		int changebreadth(int b);
	};
		rectangle::rectangle(int l,int b){
			length=l;
			breadth=b;
		}
		int rectangle::area(){
			return length*breadth;
		}
		int rectangle::changelength(int l){
			length=l;
		}
		int rectangle::changebreadth(int b){
			breadth=b;
		}
		
int main(){
	int l,b;
	rectangle r;
	int c=r.area();
	cout<<"Default area is "<<c<<endl;
	cout<<"Enter length and bredth";
	cin>>l>>b;
	 r=rectangle(l,b);
	int e=r.area();
	cout<<e;
	
}