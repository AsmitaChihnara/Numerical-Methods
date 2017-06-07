#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
float f(float m);
int main()
{
float a,b;int n;
float h,s1=0,s2=0,s=0;
b=M_PI_2;
cout<<"\n Enter the limits : ";
cin>>a>>n;
float x[6],y[6];
x[0]=a;x[n]=b;
h=(b-a)/n;
for(int i=1;i<n;i++)
{
x[i]=x[0]+(i*h);
y[i]=f(x[i]);
if(i%3==0)
s2+=y[i];
else
s1+=y[i];
}
s=(3*h/8)*((f(a)+f(b)+(3*s1)+(3*s2)));
cout<<"\n The value of integration is : "<<s;getch();return 0;
}
float f(float m)
{
float p;
p=sqrt(1-(0.162*sin(m)*sin(m)));
return p;
}
