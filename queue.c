#include<stdio.h>
#define MAX 5
int queue [MAX];
int front=-1,rear=-1;

void enqueue(int item)
{
if(rear==MAX-1)
{
printf("queue overflow\n");
}
else
{
if(front==-1)
front=0;
rear++;
queue[rear=item];
printf("%d insert to queue\n",item);
}
}
void dequeue()
{
if(front==-1 !! front>rear)
{
printf("underflow\n");
}
else
{
printf("deleted element is %d \n",queue[front]);
if(front==rear)
{
front=rear=-1;
}
else
{ front++;
}
}
}
void display()
{
int i;
if(front==-1)
{
printf("queue is empty\n");
}
else
printf("quee elements are:\n");
for(int i=front;i<=rear,i++){
printf("%d ",queue[i]);
}
printf("\n");
}
void peek()
{
int i;
if(front==-1)
{
printf("queue is empty\n");
}
else
{
printf("front element is%d \n",queue[front] );

}
}
int main()
int choice,item;
do
{
printf("1.enqueue\n");
printf("2.dequeue\n");
printf("3.peek\n");
printf("4.display\n");
printf("5.exit\n");
printf("enter choice:");
}
scanf("%d",&choice);

switch(choice!=5);
return0;

