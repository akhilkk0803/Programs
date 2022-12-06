#include<iostream>
using namespace std;
class rectangle {
	private:
		int length;
		int breadth;
		public:
			rectangle (int l,int b){
				
				length=l;
				breadth=b;
			}
			int area()
			{return length*breadth;
			}
			int changelength(int len){
				length=len;
				return length;
			}
			
};
int main(){
	int l,b,e;
	cin>>l>>b;
	rectangle r(l,b);

	int d=r.area();
	cout<<d<<endl;
cout<<"enter the length to be changed";
cin>>e;
	int c=r.changelength(e);
	cout<<"the changed length is "<<c<<endl;
	 d=r.area();
	 
	 cout<<"area after change of length"<<d;
}
