#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void swap(char *x,char *y)
{
  char t;
   t=*x;
   *x=*y;
   *y=t;
}
void perm(char *a,int l,int h)
{
   int k;
   if(l==h)
    printf("%s\n",a);
   else
     for(k=l;k<h;k++)
     {
      swap(&a[l],&a[k]);
      perm(a,l+1,h);
      swap(&a[l],&a[k]);
     }
}


int main(){
char a[100];
int i=0,j;
scanf("%[^\n]",a);
j=strlen(a);
perm(a,i,j);
return 0;
}

