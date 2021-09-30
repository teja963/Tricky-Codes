#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b){
int t=*a;
*a=*b;
*b=t;
}
void main(){
int a[10000];
int i,j,k=0,c=0,n;
scanf("%d",&n);
for(i=0;i<1001;i++)
{
  if(i<10)a[k++]=i;
   else{
     c=i;
      while(c>0)
      {
        a[k++]=c%10;
        c/=10;
        }
       }
}
for(i=10;i<190;i+=2)
swap(&a[i],&a[i+1]);
for(i=190;i<2893;i+=3)
swap(&a[i],&a[i+2]);
printf("%d",a[n]);
}
