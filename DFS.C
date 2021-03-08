#include<stdio.h>
#include<conio.h>

//a[][] is the adjascency matrix 
//visited[] is to keep track of aldready visited vertices

int a[20][20],visited[20],n,v,i,j;
void dfs(int v)
{
 //int i;
 for(i=0;i<n;i++)
 {
  if(a[v][i]!=0 && visited[i]==0)
  {
    visited[i]=1;//mark visited matrix
    printf("%d\t",i);
    dfs(i);
  }
 }
}
int main()
{
 printf("Enter the number of vertices:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  visited[i]=0;//no node is visited yet
 }
 printf("\nEnter the graph in matrix form:\n");
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 printf("\nEnter the starting vertex:\n");
 scanf("%d\t",&v);
 printf("DFS traversal is:\n");
 visited[v]=1;//mark the starting vertex as visited
 printf("%d\t",v);
 dfs(v);


}