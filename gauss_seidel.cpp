#include<iostream>
#include<conio.h>
using namespace std;
int main( )
{
float x1,x2,x3,k1,k2,k3,d1=0.1,d2=0.1,d3=0.1 ;
int i,j,k;
x1=0;x2=0;x3=0;
cout<<" Iteration values:\n " ;
k1=x1;
k2=x2;
k3=x3;
x1=(k2/7)-((2*k3)/7)+0.142857;
x2=0.285714-((3*k1)/7)+(k3/7);
x3=0.6-(k1/5)+((2*k2)/5);
if(k1>x1)
d1=k1-x1;
else
d1=x1-k1;

if(k2>x2)
d2=k2-x2;
else
d2=x2-k2;

if(k3>x3)
d3=k3-x3;
else
d3=x3-k3;
while(d1>=0.000001 && d2>=0.000001 && d3>=0.000001)
{ 
k1=x1;
k2=x2;
k3=x3;
x1=(k2/7)-((2*k3)/7)+0.142857;
x2=0.285714-((3*k1)/7)+(k3/7);
x3=0.6-(k1/5)+((2*k2)/5);
if(k1>x1)
d1=k1-x1;
else
d1=x1-k1;

if(k2>x2)
d2=k2-x2;
else
d2=x2-k2;

if(k3>x3)
d3=k3-x3;
else
d3=x3-k3;

cout<<x1<<"\t"<<x2<<"\t"<<x3<<"\n";
}
cout<<"Solution of the system is:"<<x1<<"\t"<<x2<<"\t"<<x3;
getch();
return 0;

}
