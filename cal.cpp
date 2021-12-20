#include<bits/stdc++.h>
using namespace std;
string fractionToDecimal(int numerator, int denominator) {
         string ans;
        map<long long int,int>m;
        long long nm=numerator,dm=denominator;
        if(numerator==denominator)return "1";
        if((nm>0&&dm<0)||(nm<0&&dm>0))ans+='-';
        nm=abs(nm);
        dm=abs(dm);
        ans+=to_string(nm/dm);
        nm%=dm;
        if(nm>0)ans+='.';
        while(nm>0)
        {
              if(m.find(nm)!=m.end())
              {
                  ans=ans.substr(0,m[nm])+"("+ans.substr(m[nm])+")";
                  break;
              }
               m[nm]=ans.size();
               nm*=10;
               ans+=to_string(nm/dm);
               nm%=dm;
            
        }
       
        return ans;
    } 
int gcd(int a,int b)
{
	if(b==0)return a;
	else return gcd(b,a%b);
}
pair<int,int> make(int y,int x)
{
	int g=gcd(abs(y),abs(x));
	bool sign=(y<0)^(x<0);
	if(sign)return make_pair(abs(y)/g,abs(x)/g);
	return make_pair(-abs(y)/g,abs(x)/g);
}
void equations(int a1,int a2,int a3,int b1,int b2,int b3)
{
	pair<int,int>p;
	p=make(b3*a2-b2*a3,a1*b2-b1*a2);
	cout<<"("<<p.first<<"/"<<p.second;
	p=make(b3*a1-b1*a3,b1*a2-a1*b2);
	cout<<","<<p.first<<"/"<<p.second<<")";
}

int multiply(vector<int>&v,int x,int n)
{
     int c=0,i;
     for(i=0;i<n;i++)
     {
         int p=v[i]*x+c;
         v[i]=p%10;
         c=p/10;
     }
     
     while(c){
         v[i++]=c%10;
         c/=10;
         n++;
     }
     return n;
 }


int main(){
int i,j,k,a1,a2,a3,b1,b2,b3,w=0;
char c;
vector<int>v(pow(2,30));
while(w<1){
cin>>c;
switch(c){
case 'l':cin>>a1>>a2>>a3;
         cin>>b1>>b2>>b3;
         if((a2==0||b1==0)&&(a1==0||b2==0))cout<<"Invalid output"<<endl;
         else equations(a1,a2,a3,b1,b2,b3);
         break;
         
case 'g':cin>>a1>>a2;
         cout<<gcd(a1,a2)<<endl;
         break;
         
case 'f':cin>>a1;
         v[0]=1;
         j=1;
         for(i=1;i<=a1;i++)j=multiply(v,i,j);
         for(i=j-1;i>=0;i--)cout<<v[i];
         cout<<endl;
         break;
         
case 'a':cin>>a1>>a2;
         cout<<(int)(a1&a2)<<endl;
         break;
         
case 'x':cin>>a1>>a2;
         cout<<(int)(a1^a2)<<endl;
         break;
         
case 'd':cin>>a1>>a2;
         cout<<fractionToDecimal(a1,a2);
         break;
         
         
case 't':w++;
         }}
return 0;}
