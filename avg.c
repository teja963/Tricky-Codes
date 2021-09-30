#include<stdio.h>
#include<stdlib.h>
int main(){
int n,i;
float *a,s=0;
scanf("%d",&n);
a=(float*)malloc(n*sizeof(float));
for(i=0;i<n;i++)
scanf("%f",&a[i]);
for(i=0;i<n;i++)
s+=a[i];
printf("%f",s/n);
return 0;
}





