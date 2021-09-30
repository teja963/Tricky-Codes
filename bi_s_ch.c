#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
#include<string.h>
int bi(int a[],int l,int h,int k)
{
  int m;
   m=(l+h)/2;
   if(l==h)
   {
     if(a[l]==k) return l;
     else return -1;
   }
   else
   {
     if(a[m]==k) return m;
     if(k<a[m]) return bi(a,l,m-1,k);
     else return bi(a,m+1,h,k);
   }
}
int main()
{
int *a,n,i,j,k,t,ans;
char c[4];
scanf("%c %d",&c[0],&n);
a=(int*)malloc(n*sizeof(int));
if(c[0]=='r')
{
  for(i=0;i<n;i++) 
  scanf("%d",&a[i]);
}
scanf("%c %d",&c[1],&k);
if(c[1]=='s')
{
  ans=bi(a,0,n-1,k);
  for(j=ans-1;j>=0;j--)
  {
   if(a[j]==k)
    ans=j;
  }
  printf("%d\n",ans);

scanf("%c",&c[2]);
if(c[2]=='d'){
for(i=0;i<n;i++)
printf("%d ",a[i]);
}
}
return 0;
}


