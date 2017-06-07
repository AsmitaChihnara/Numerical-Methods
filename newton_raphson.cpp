#include<iostream>
#include<conio.h>
#include <iomanip>
#include <cmath>
using namespace std;

double fun(double a){
	double k;
	k=a*a*a*a-a-10;
	return k;
}

double fun1(double x)
{
double p,q;
p=4*x*x*x-1;
q=x-(fun(x)/p);
return q;
}

int main()
{
double a,b,c,diff=0.1,x;
int i=0;
cout<<"\nEnter the interval: \n";
cin>>a>>b;
if(fun(a)*fun(b)<=0){
cout<<"\nEnter first value:";
cin>>x;
cout<<"\nITERATION SOLUTION: \n";
while(diff>0.0000000000001){
	c=fun1(x);
if(x==c)
{
	cout<<"\n "<<i+1<<" \t\t "<<c<<std::setprecision(12);
}
else
cout<<"\n "<<i+1<<" \t\t "<<c<<std::setprecision(12);
if(c>x)
diff=(c-x);
else
diff=(x-c);
x=c;
i++;
}
cout<<"\n Solution is :"<<c<<std::setprecision(12);
}
else
cout<<"\nWRONG INTERVAL";
getch();
}

