#include<iostream>
using namespace std;
struct Queue {
int size;
int front ;
int rear;
int *Q;
};
void create(Queue *q,int size)
{
    q->size=size;
    q->front=-1;
    q->rear=-1;
    q->Q=new int[q->size];
}
void enQueue( Queue *q,int x)
{
    if(q->rear==q->size-1) cout<<"full";
    else
    {
        q->rear++;
        q->Q[q->rear]=x;
    }
}
int deQueue(Queue *q)
{ int x=-1;
    if(q->front==q->rear)
    {

        cout<<"empty";
    }
    else
    {
        q->front++;
        x=q->Q[q->front];
    }
    return x;
}
void display(Queue q)
{
    for(int i=q.front+1;i<=q.rear;i++)
    {
        cout<<q.Q[i]<<endl;
    }
}

int main()
{ struct Queue q;
create(&q,5);
enQueue(&q,10);enQueue(&q,20);
enQueue(&q,30);
deQueue(&q);
display(q);

}
