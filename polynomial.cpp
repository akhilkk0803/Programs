#include<iostream>
#include<stdlib.h>
using namespace std;


struct terms{
	int coeff;
	int exp;
};
struct poly{
	int n;
	struct terms *terms;
};
void create(struct poly *p){
	int i;
	cout<<"enter the no.of non-zero elements";
	cin>>p->n;
	p->terms=new terms[p->n];
	cout<<"enter coeff and exp";
   for(i=0;i<p->n;i++){
   	cin>>p->terms[i].coeff>>p->terms[i].exp;
   }
}
void display(struct poly p)
{
	int i;
	for(i=0;i<p.n;i++){
		cout<<p.terms[i].coeff<<"x^"<<p.terms[i].exp<<"+";
	}
}
struct poly *add(struct poly *p1,struct poly *p2){
	struct poly *sum;
        sum=(struct poly*)malloc(sizeof(struct poly));
        sum->terms=new terms[p1->n+p2->n];
        int i=0,j=0,k=0;
        while(i<p1->n&&j<p2->n){
        	if(p1->terms[i].exp>p2->terms[j].exp) sum->terms[k++]=p1->terms[i++];
        	 else if(p1->terms[i].exp<p2->terms[j].exp) sum->terms[k++]=p2->terms[j++];
			else {
				sum->terms[k].exp=p1->terms[i].exp;
				sum->terms[k++].coeff=p1->terms[i++].coeff+p2->terms[i++].coeff;
			}
		}
		for(;i<p1->n;i++) sum->terms[k++]=p1->terms[i];
		for(;j<p2->n;j++) sum->terms[k++]=p2->terms[j];
        sum->n=k;
        return sum;
	}

 
int main(){
	struct poly p1,p2,*p3;
	create(&p1);
	create(&p2);
	p3=add(&p1,&p2);
	cout<<endl;
	display(p1);
	cout<<endl;
	display(p2);
	cout<<endl;
	display(*p3);
	
	
}