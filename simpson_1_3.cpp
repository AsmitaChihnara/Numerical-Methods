#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main()
{
int n,i;
i=1;
float a,y,m,s,b,h,f,g,z,x,k,e;
cout<<"\n Input the limits:";
cin>>a>>b;
f=sqrt(a*a+1) ; g=sqrt(b*b+1) ;
n=2;
h=(b-a)/n;
m=sqrt(h*h+1);
z=h*(f+g+(4*m))/3;
n=n+2; e=0.1;
while(e>0.001)
{
h=(b-a)/n;
x=a+h;
s=0;int c=1;
while(x<b)
{
if((c%2)!=0)
k=4*sqrt(x*x+1);
else
k=2*sqrt(x*x+1);
s=s+k; c++ ; x=x+h;
}
y=h*(f+g+s)/3;
if(z>y)
e=z-y;
else
e=y-z;
z=y; n=n+2;
}
cout<<"\n Solution of integration is :"<<y;getch();
return 0;
}
