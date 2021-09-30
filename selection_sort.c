#include<stdio.h>
#include<stdlib.h>
int  selection_sort(int a[],int h)
{
int i,j,k=0,t;
for(i=0;i<h-1;i++)
{
  for(j=i+1;j<h;j++)
  {
    if(++k&&a[j]<a[i]){
     t=a[j];
     a[j]=a[i];
     a[i]=t;}
  }   
}
return k;
}
int main(){
int *a,n,i,t;
scanf("%d",&n);
a=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++)
scanf("%d",&a[i]);
t=selection_sort(a,n);
for(i=0;i<n;i++){
printf("%d ",a[i]);}
printf("\n%d",t);
return 0;
}
