#include<iostream>
#include<conio.h>
#include <iomanip>
using namespace std;

double fun1(double a){
	double k;
	k=a*a-3*a+1;
	return k;
}
double fun(double x)
{
double p;
p=(x*x+1)/3;
return p;
}
int main()
{
int i=0;
double a,b,x,y,g,f,diff=0.1;
cout<<"\nEnter the interval: \n";
cin>>a>>b;
if(fun1(a)*fun1(b)<=0){
cout<<"\nEnter first value:";
cin>>x;
f=fun(x);
while(diff>0.0000000000001)
{
g=fun(f);
cout<<"\n"<<i+1<<" iteration :"<<g<<std::setprecision(12);
if(g>f)
diff=g-f;
else
diff=f-g;
f=g;
i++;
}
cout<<"\n\nSOLUTION OF THE EQUATION IS :"<<g<<setprecision(12);
}
else
cout<<"\nWRONG INTERVAL";
getch();
}
