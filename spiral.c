#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#include<math.h>
int spiral(int a[][100],int m,int n){
int r=0,c=0,i;
while(r<m&&c<n)
{
 for(i=c;i<n;i++){
  printf("%d ",a[r][i]);}
  r++;
  for(i=r;i<m;i++){
  printf("%d ",a[i][n-1]);}
  n--;
  if(r<m){
  for(i=n-1;i>=c;i--){
  printf("%d ",a[m-1][i]);}
  m--;}
  if(c<n){
  for(i=m-1;i>=r;i--){
  printf("%d ",a[i][c]);}
  c++;
  }
  }
}
int main(){
int a[100][100],i,j,m,n;
scanf("%d %d",&m,&n);
for(i=0;i<m;i++){
for(j=0;j<n;j++){
scanf("%d",&a[i][j]);}}
spiral(a,m,n);
return 0;
}
