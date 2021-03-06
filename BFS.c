#include<stdio.h>
#include<conio.h>
int a[20][20],queue[20],visited[20],n,i,j,v;
int front=-1;
int rear=-1;
void bfs(int v)
{
 for(i=0;i<n;i++)
 {
  if(a[v][i]!=0 && visited[i]==0)
 {
   rear=rear+1;
   queue[rear]=i;
   visited[i]=1;
   printf("%d\t",i);
 }
}
 front=front+1;
 if(front<=rear)
  {
    bfs(queue[front]);
  }
}
int main()
{
 printf("Enter the number of vertices:");
scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  visited[i]=0;
 }
printf("Enter the data in the matrix form\n");
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
printf("Enter the starting vertex:");
scanf("%d",&v);

front=0;
rear=0;
queue[rear]=v;
printf("BFS traversal is:\n");
printf("%d\t",v);
visited[v]=1;
bfs(v);


}
