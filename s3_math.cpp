#include<bits/stdc++.h>
int n;
void PRINT(long double * arr){
int i;
long double t=0;
for(i=0;i<n;i++)
t+=arr[i];
printf("%Lf",t);
} 

void READ_DO(int n,long double *a,long double *b,long double *sa,long double *sb,long double *ca,long double *cb,long double *fa,long double *p1,long double *p2){
int i;
for(i=0;i<n;i++)
scanf("%Lf",&a[i]);
for(i=0;i<n;i++)
scanf("%Lf",&b[i]);
for(i=0;i<n;i++){
p1[i]=a[i]*b[i];
p2[i]=a[i]*a[i]*b[i];
sa[i]=a[i]*a[i];
sb[i]=b[i]*b[i];
ca[i]=a[i]*a[i]*a[i];
cb[i]=b[i]*b[i]*b[i];
fa[i]=a[i]*a[i]*a[i]*a[i];}}

double MEAN(float X,float u1,float u2,float v1,float v2,float r){
double k;
k=sqrt((double)(v1/v2));
return u1+(r*k*(X-u2));
}

double S_DEVIATION(float v1,float r){
double k;
k=(v1*(1-r*r));
return sqrt(k);
}

double distri_t(int n,float r){
return r*sqrt((n-2)/(1-r*r));
}

void S2(int n1,int n2,long double *a,long double *b){
int i,N;
N=n1+n2;
long double t1=0,t2=0,t,Ti=0;
for(i=0;i<n1;i++)
scanf("%Lf",&a[i]);
for(i=0;i<n2;i++)
scanf("%Lf",&b[i]);
for(i=0;i<n1;i++){t1+=a[i];Ti+=pow(a[i],2);}
for(i=0;i<n2;i++){t2+=b[i];Ti+=pow(b[i],2);}
t=t1+t2;
printf("T1 is:%Lf T2 is:%Lf G is:%Lf\n",t1,t2,t);
printf("Ti is:%Lf T1^2 is:%f T2^2 is:%f G^2 is:%f G^2/N is:%f",Ti,pow(t1,2),pow(t2,2),pow(t,2),pow(t,2)/N);
}

void S3(int n1,int n2,int n3,long double *a,long double *b,long double *c){
int i,N;
N=n1+n2+n3;
long double t1=0,t2=0,t3=0,t,Ti=0;
for(i=0;i<n1;i++)
scanf("%Lf",&a[i]);
for(i=0;i<n2;i++)
scanf("%Lf",&b[i]);
for(i=0;i<n3;i++)
scanf("%Lf",&c[i]);
for(i=0;i<n1;i++){t1+=a[i];Ti+=pow(a[i],2);}
for(i=0;i<n2;i++){t2+=b[i];Ti+=pow(b[i],2);}
for(i=0;i<n3;i++){t3+=c[i];Ti+=pow(c[i],2);}
t=t1+t2+t3;
printf("T1 is:%Lf T2 is:%Lf T3 is:%Lf G is:%Lf\n",t1,t2,t3,t);
printf("(Ti)^2 is:%Lf T1^2 is:%f T2^2 is:%f T3^2 is:%f G^2 is:%f (G^2)/N is:%f",Ti,pow(t1,2),pow(t2,2),pow(t3,2),pow(t,2),pow(t,2)/N);
}

void S4(int n1,int n2,int n3,int n4,long double *a,long double *b,long double *c,long double *d){
int i,N;
N=n1+n2+n3+n4;
long double t1=0,t2=0,t3=0,t4=0,t,Ti=0;
for(i=0;i<n1;i++)
scanf("%Lf",&a[i]);
for(i=0;i<n2;i++)
scanf("%Lf",&b[i]);
for(i=0;i<n3;i++)
scanf("%Lf",&c[i]);
for(i=0;i<n4;i++)
scanf("%Lf",&d[i]);
for(i=0;i<n1;i++){t1+=a[i];Ti+=pow(a[i],2);}
for(i=0;i<n2;i++){t2+=b[i];Ti+=pow(b[i],2);}
for(i=0;i<n3;i++){t3+=c[i];Ti+=pow(c[i],2);}
for(i=0;i<n4;i++){t4+=d[i];Ti+=pow(d[i],2);}
t=t1+t2+t3+t4;
printf("T1 is:%Lf T2 is:%Lf T3 is:%Lf T4 is:%Lf G is:%Lf\n",t1,t2,t3,t4,t);
printf("(Ti)^2 is:%Lf T1^2 is:%f T2^2 is:%f T3^2 is:%f T4^2 is:%f G^2 is:%f (G^2)/N is:%f",Ti,pow(t1,2),pow(t2,2),pow(t3,2),pow(t4,2),pow(t,2),pow(t,2)/N);
}

void S5(int n1,int n2,int n3,int n4,int n5,long double *a,long double *b,long double *c,long double *d,long double *e){
int i,N;
N=n1+n2+n3+n4+n5;
long double t1=0,t2=0,t3=0,t4=0,t5=0,t,Ti=0;
for(i=0;i<n1;i++)
scanf("%Lf",&a[i]);
for(i=0;i<n2;i++)
scanf("%Lf",&b[i]);
for(i=0;i<n3;i++)
scanf("%Lf",&c[i]);
for(i=0;i<n4;i++)
scanf("%Lf",&d[i]);
for(i=0;i<n5;i++)
scanf("%Lf",&e[i]);
for(i=0;i<n1;i++){t1+=a[i];Ti+=pow(a[i],2);}
for(i=0;i<n2;i++){t2+=b[i];Ti+=pow(b[i],2);}
for(i=0;i<n3;i++){t3+=c[i];Ti+=pow(c[i],2);}
for(i=0;i<n4;i++){t4+=d[i];Ti+=pow(d[i],2);}
for(i=0;i<n5;i++){t5+=e[i];Ti+=pow(e[i],2);}
t=t1+t2+t3+t4+t5;
printf("T1 is:%Lf T2 is:%Lf T3 is:%Lf T4 is:%Lf T5 is:%Lf G is:%Lf\n",t1,t2,t3,t4,t5,t);
printf("(Ti)^2 is:%Lf T1^2 is:%f T2^2 is:%f T3^2 is:%f T4^2 is:%f T5^2 is:%f G^2 is:%f (G^2)/N is:%f",Ti,pow(t1,2),pow(t2,2),pow(t3,2),pow(t4,2),pow(t5,2),pow(t,2),pow(t,2)/N);
}


void AN_1(long double *a,long double *b,long double *c,long double *d,long double *e){
int n1,n2,n3,n4,n5;
scanf("%d",&n);
if(n==2){scanf("%d %d",&n1,&n2);S2(n1,n2,a,b);}
if(n==3){scanf("%d %d %d",&n1,&n2,&n3);S3(n1,n2,n3,a,b,c);}
if(n==4){scanf("%d %d %d %d",&n1,&n2,&n3,&n4);S4(n1,n2,n3,n4,a,b,c,d);}
if(n==5){scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);S5(n1,n2,n3,n4,n5,a,b,c,d,e);}
}

void AVOV_2(float a[100][100]){
int r,c,i,j;
float s=0,Ti=0;
scanf("%d %d",&r,&c);
for(i=0;i<r;i++){
for(j=0;j<c;j++){
scanf("%f",&a[i][j]);}}
for(i=0;i<r;i++){
for(j=0;j<c;j++){
Ti+=pow(a[i][j],2);}}
printf("The Ti^2 is:%f\n",Ti);
printf("the r vals:");
for(i=0;i<r;i++){
s=0;
for(j=0;j<c;j++){
s+=a[i][j];}
printf("%f ",s);
}
printf("\nthe col vals:");
for(j=0;j<c;j++){
s=0;
for(i=0;i<r;i++){
s+=a[i][j];}
printf("%f ",s);
}}
int main(){
int i,w=0;
float u1,u2,v1,v2,r,X,arr[100][100];
long  double *a,*b,*ca,*cb,*fa,*p2,*sa,*sb,*p1;
char c;
a=(long double*)malloc(100*sizeof(long double));
b=(long double*)malloc(100*sizeof(long double));
sa=(long double*)malloc(100*sizeof(long double));
sb=(long double*)malloc(100*sizeof(long double));
p1=(long double*)malloc(100*sizeof(long double));
p2=(long double*)malloc(100*sizeof(long double));
ca=(long double*)malloc(100*sizeof(long double));
cb=(long double*)malloc(100*sizeof(long double));
fa=(long double*)malloc(100*sizeof(long double));
while(w<1){
scanf("%c",&c);
switch(c){
case 'c':std::cin>>n;
         READ_DO(n,a,b,sa,sb,ca,cb,fa,p1,p2);
         printf("\nThe sum  of X is: \n");
         PRINT(a);
         printf("\nThe sum  of Y is: \n");
         PRINT(b);
         printf("\nThe sum  of X^2 is: \n");
         PRINT(sa);
         printf("\nThe sum  of Y^2 is:\n");
         PRINT(sb);
         printf("\nThe sum  of X^3 is:\n");
         PRINT(ca);
         printf("\nThe sum  of Y^3 is:\n");
         PRINT(cb);
         printf("\nThe sum  of X^4 is:\n");
         PRINT(fa);
         printf("\nThe sum  of X * Y is:\n");
         PRINT(p1);
         printf("\nThe sum  of x^2 * Y is:\n");
         PRINT(p2);
         break;
         
case 't':std::cin>>i>>u1;
         printf("%f",distri_t(i,u1));
         break;
case 'e':w++;
         break;
case 'p':scanf("%f %f %f %f %f %f",&X,&u1,&u2,&v1,&v2,&r);
         printf("The mean is:%f\n",MEAN(X,u1,u2,v1,v2,r));
         printf("The deviation is:%f",S_DEVIATION(v1,r));
         break;
         
case 'i':std::cin>>u1>>u2;
         printf("%f %f",tanh(u1),tanh(u2));
         break;
         
case 'a':scanf("%d",&i);
         if(i==1)AN_1(a,b,sa,sb,ca);
         if(i==2)AVOV_2(arr);
         break;
}}
return 0;
}









