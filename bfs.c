#include<stdio.h>
int queue[100],front=-1,rear=-1;
int visited[100];
void enqueue(int value)
{
if(rear==99)
{
printf("Queue is overflow");
}
else{
if(front==-1)
{
front=0;
}
queue[++rear]=value;
}
}
int dequeue()
{
if(front==-1 || front>rear)
{
return -1;
}
return queue[front++];
}
void bfs(int adj[10][10],int start,int n)
{
int i;
enqueue(start);
visited[start]=1;
printf("BFS: ");
while(front<=rear)
{
int current=dequeue();
printf(" %d ",current);
for(i=0;i<n;i++)
{
if(adj[current][i]==1 && !visited[i])
{
enqueue(i);
visited[i]=1;
}
}
}
}
int main()
{
int adj[10][10],i,j,start,n;
printf("Enter the number of vertex: ");
scanf("%d",&n);
printf("Enter the adj matrix: \n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&adj[i][j]);
}
}
printf("Enter the starting of vertex: ");
scanf("%d",&start);
bfs(adj,start,n);
return 0;
}


