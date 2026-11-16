#include<stdio.h>
#include<stdlib.h>
int queue[100],front=-1,rear=-1;
int visited[100];
void enqueue(int value)
{
if(rear==99)
{
printf("queue overflow\n");
}
else
{
if(front==-1)
{
front=0;
}
queue[++rear]=value;
}
}
int dequeue()
{
if(front==-1||front>rear)
return -1;
return queue[front++];
}
void bfs(int adj[10][10],int start,int n)
{
int i,current;
enqueue(start);
visited[start]=1;
printf("bfs traversal:");
while(front<=rear)
{
current=dequeue();
printf("%d ",current);
for(i=0;i<n;i++)
{
if(adj[current][i]==1&&!visited[i])
{
enqueue(i);
visited[i]=1;
}
}
}
}
int main()
{
int n,adj[10][10],i,j,start;
printf("enter no of vertices:");
scanf("%d",&n);
printf("enter adjacency matrix:\n");
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&adj[i][j]);
printf("enter starting vertex(0 to %d):",n-1);
scanf("%d",&start);
bfs(adj,start,n);
return 0;
}

