#include<iostream>
#include<conio.h>
#include <iomanip>
#include <cmath>
using namespace std;

double fun(double a){
	double k;
	k=(cos(a) + 2*sin(a) + a*a);
	return k;
}

double secant(double x,double y)
{
double p;
p=x-(fun(x)*(x-y))/(fun(x)-fun(y));
return p;
}

int main()
{
double a,b,c,diff=0.1,x,y;
int i=0;
cout<<"\nEnter the interval: \n";
cin>>a>>b;
if(fun(a)*fun(b)<=0){
cout<<"\nITERATION SOLUTION: \n";
while(diff>0.0000000000001){
	x=fun(a);y=fun(b);
c=secant(a,b);
if(x==y)
{
	cout<<"\n "<<i+1<<" \t\t "<<b<<std::setprecision(12);
}
else
cout<<"\n "<<i+1<<" \t\t "<<c<<std::setprecision(12);
if(c>b)
diff=(c-b);
else
diff=(b-c);
a=b;
b=c;
i++;
}
cout<<"\n Solution is :"<<c<<std::setprecision(12);
}
else
cout<<"\nWRONG INTERVAL";
getch();
}

