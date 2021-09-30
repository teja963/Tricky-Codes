#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
#include<string.h>
static int k=0,h=0,z=0,v=0;
void allot_seat(int a[],int n,int t)
{
  if(k<n){

  if(a[k]==0){
    a[k]=t;
    printf("%d\n",k);
    k++;
         }
        }
    else
    {
    if(a[z]==0){
    a[z]=t;
    printf("%d\n",z);
    z++;}
   
    }
  
}
void process_transaction(int a[],int n,int b[],int c[]){
int i;
for(i=n-2;i>=0;i--)
printf("%d %d\n",c[i],b[i]);
}


void update_preference(int a[],int n,int t){


printf("-1");


}
void sort_customers(int a[],int n,int t,int b[]){
}

int main()
{
  int *a,*b,*c,n,i,t,n1,j,k;
   scanf("%d",&n);
   a=(int*)calloc(n,sizeof(int));
   b=(int*)calloc(10,sizeof(int));
   c=(int*)malloc(15*sizeof(int));
   for(i=0,j=0,k=0;i<15,k<15,j<10;i++)
   {
     scanf("%d",&n1);
     if(n1==0){
     scanf("%d %d",&c[k],&b[j]);
     j++;
     k++;
   allot_seat(a,n,t);}
     if(n1==1)
    process_transaction(a,j,b,c);
   if(n1==-1)
   break;
   if(n1==2){
   scanf("%d %d",&c[k],&b[i]);
   k++;
   j++;
   update_preference(a,n,t);
   }
   if(n1==3)
   sort_customers(a,n,t,b);
   if(n1==4)
   printf("%d %d",c[j],b[j]);
   }
return 0;
}
