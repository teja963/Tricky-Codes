#include<bits/stdc++.h>
using namespace std;
struct sems{
float d1,d2,d3,d4;
char c[10],nm[50];
};
struct cgpa{
float f;
char ch[10],name[50];
};


int PARTITION(struct cgpa* C,int l,int h){
 float p=(C+h)->f;
  int i=l-1,j;
  for(j=l;j<h;j++)
  {
    if((C+j)->f<p){
    i++;
    swap((C+i)->f,(C+j)->f);
    swap((C+i)->ch,(C+j)->ch);
    swap((C+i)->name,(C+j)->name);
   }
  }
    swap((C+i+1)->ch,(C+h)->ch);
    swap((C+i+1)->name,(C+h)->name);
    swap((C+i+1)->f,(C+h)->f);
    return (i+1);
    }


void QUICK_SORT(struct cgpa* C,int l,int h){
if(l<h){
  int pi=PARTITION(C,l,h);
  QUICK_SORT(C,l,pi-1);
  QUICK_SORT(C,pi+1,h);}}

int main(){
int i,n1,n2,j;
struct sems* BS1=(struct sems*)malloc(1000*sizeof(struct sems));
struct cgpa* C1=(struct cgpa*)malloc(1000*sizeof(struct cgpa));
scanf("%d",&n1);
for(i=0;i<n1;i++)
scanf("%s %s %f %f %f %f",(BS1+i)->c,(BS1+i)->nm,&(BS1+i)->d1,&(BS1+i)->d2,&(BS1+i)->d3,&(BS1+i)->d4);
for(i=0;i<n1;i++){
strcpy((C1+i)->ch,(BS1+i)->c);
strcpy((C1+i)->name,(BS1+i)->nm);
(C1+i)->f=float(((BS1+i)->d1*17.000)+((BS1+i)->d2*17.000)+((BS1+i)->d3*20.000)+((BS1+i)->d4*20.000))/(17.0000+17.000+20.000+20.000);
}
QUICK_SORT(C1,0,n1-1);
printf("\n");
for(i=n1-1,j=0;i>=0;i--)
printf("%s %s (%.3f) ----------%d_rank\n",(C1+i)->ch,(C1+i)->name,(C1+i)->f,++j);
return 0;}
