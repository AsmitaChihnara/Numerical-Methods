#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

float f(float x,float y)
{
float z;
z=x+y;
return z;
}
int main()
{
float h,x,y,x_1,y_1,a,m,l;
int i,n,k;
cout<<"Enter values of x0 , y(x0) :\n ";
cin>>m>>l;

cout<<"Enter values of x to find the functional value:\n ";
cin>>a;
for(k=0;k<7;k++){
	x=m;y=l;
	n=pow(2,k);h=(a-m)/n;
	cout<<"For 2^"<<k+1<<" no. of steps...\n";
for (i=0;i<=n && x<=a;i++)
{
y_1=y+h*f(x,y);x_1=x+h;
y=y+h*(f(x,y)+f(x_1,y_1))/2;
x=x_1;
}
cout<<"x="<<a<<"\t";
cout<<"y="<<y<<"\n\n";}
getch();
return 0;
}
