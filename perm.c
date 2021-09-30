#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#include<math.h>
int main(){
char a[1000];
int n,i,j,k;
scanf("%[^\n]",a);
scanf("%d",&n);
k=strlen(a);
for(i=0;i<k-n+1;i++){
for(j=i;j<i+n;j++){
printf("%c",a[j]);}
printf(",");}
return 0;
}
