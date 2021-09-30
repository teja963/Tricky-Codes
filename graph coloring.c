#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int v,g[10000][10000],x[10000];
void next_color(int x[],int k)
{
  int i,j;
     x[k]=1;
  
  for(i=v-1;i>=k;i--){
     if(g[i][k]!=0&&x[i]==x[k])
        x[k]=x[i]+1;}
        
}

void rec(int k)
{
  if(k<v){
  rec(k+1);
  next_color(x,k);}
  
 }
 
int main()
{
int e,k,l,i,j;
scanf("%d\n",&v);
scanf("%d",&e);
for(i=0;i<v;i++){
  for(j=0;j<v;j++)
     g[i][j]=0;  
   }
   
while(e--){
    scanf("%d %d",&k,&l);
    g[k][l]=1;
    g[l][k]=1;
    }
    
for(i=v-1;i>=0;i--)    
rec(i);
  
for(i=0;i<v;i++){
if(x[i]==1)printf("a\n");
if(x[i]==2)printf("b\n");
if(x[i]==3)printf("c\n");
if(x[i]==4)printf("d\n");
if(x[i]==5)printf("e\n");
if(x[i]==6)printf("f\n");
}
return 0;
}
