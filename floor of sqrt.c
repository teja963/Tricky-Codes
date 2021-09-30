#include<stdio.h>
int  main(){
int n,l,h,m;
h=n;
while(h-l>1)
{
 m=(h+l)/2;
 if(m*m>n)
  h=m;
  else
  l=m;
}
printf("%d",l);
return 0;
}
