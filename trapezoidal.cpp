#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
int n;
float a,m,b,e;
float f,g,k,h,x,z,y;
cout<<"\n Enter the limits:";
cin>>a>>b;
f=sqrt(a*a+1) ; g=sqrt(b*b+1) ;
n=1;
h=(b-a)/n;
z=h*(f+g)/2;
e=0.1; n=2;
while(e>0.0001)
{
h=(b-a)/n;
m=0; x=a+h;
while(x<b)
{
k=sqrt(x*x+1) ;
m=m+(2*k);
x=x+h;
}
y=h*(f+m+g)/2;
if(z>y)
e=z-y;
else
e=y-z;
z=y;
n++;
}
cout<<"\n Solution of integration is : "<<y;
getch();
return 0;
}
