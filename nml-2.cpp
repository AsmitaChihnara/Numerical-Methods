#include<iostream>
#include<conio.h>
#include<math.h>
#include <iomanip>
#include <limits>
#include <cmath>
using namespace std;
double fun(double k)
{
double p;

p=2*pow(k,3)-7*pow(k,2)+3*k+1;
return p;
}
void fun1(double a,double b)
{
if(fun(a)*fun(b)>0)
{
cout<<"\n\n\t\t WRONG INTERVAL\n\n\t\t";
}
else if(fun(a)*fun(b)<0)
{
double s;

s=(a+b)/2;
if(fun(a)*fun(s)<0)
{
b=s;
cout<<"\n\t\t "<<s<<std::setprecision(12);
fun1(a,b);
}
else if(fun(a)*fun(s)==0)
{
cout<<"\n\n\t\t soln is\t"<<s<<std::setprecision(12);
}
else
{
a=s;
fun1(a,b);
}
}
}
int main()
{
double a,b;
cout<<"\n\n\t\t enter the limits for first soln..\t";
cin>>a>>b;

fun1(a,b);
getch();
return 0;


}
