#include<iostream>
using namespace std;
 class Queue
 {
     private:int front;
     int rear ;
     int size;
     int *Q;
     public: Queue() {
     front=rear=-1;
     size=10;
     Q=new int[size];
     }
     Queue(int size)
     {
         front=rear=-1;
         this->size=size;
         Q=new int[this->size];
     }
     void enque(int x);
     int deQueue();
     void display();
 };
 void Queue::enque(int x)
 {
     if(rear==size-1) cout<<"FULL";
     else
     {
         rear++;
         Q[rear]=x;
     }
 }
 int Queue::deQueue()
 {
     int x=-1;
     if(front==rear) cout<<"empty";
     else
     {
         front++;
         x=Q[front];
     }
     return x;
 }


void Queue::display()
{
    for(int i=front+1;i<=rear;i++)
    {
        cout<<Q[i];
    }
}



int main()
{
    Queue q(5);
    q.enque(5);
        q.enque(30);

            q.enque(20);
q.display();
}
