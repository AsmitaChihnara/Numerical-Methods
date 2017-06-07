#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
float f(float x,float y)
{
return(x+y);
}
int main()
{
float x[10],y[10],h,k1,k2,k3,k4,m,l,a;
int n,i,k;
cout<<"Enter values of x0 , y(x0) :\n ";
cin>>m>>l;
cout<<"Enter values of x to find the functional value:\n ";
cin>>a;
for(k=0;k<7;k++){
	n=pow(2,k);h=(a-m)/n;
	x[0]=m;y[0]=l;
	cout<<"For "<<k+1<<" no. of steps...\n";
h=(a-x[0])/n;
for( i=0;i<=n;i++)
{
k1=h*(f(x[i],y[i]));
k2=h*(f(x[i]+(h/2),y[i]+(k1/2)));
k3=h*(f(x[i]+(h/2),y[i]+(k2/2)));
k4=h*(f(x[i]+h,y[i]+k3));
x[i+1]=x[i]+h;
y[i+1]=y[i]+((k1+(2*k2)+(2*k3)+k4)/6);
}
cout<<"x"<<i<<"="<<x[i-1]<<"\t";
cout<<"y"<<i<<"="<<y[i-1]<<"\n\n";
}
getch();
return 0;
}
