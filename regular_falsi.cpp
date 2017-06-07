#include<iostream>
#include<conio.h>
#include <iomanip>
using namespace std;

double fun(double a){
	double k;
	k=a*a-3*a+1;
	return k;
}

int main()
{
double a,b,c,p,q,diff=0.1;
cout<<"\nEnter the interval: \n";
cin>>a>>b;
p=fun(a);
q=fun(b);
int i=0;
if(p*q>0)
cout<<"\n\nWRONG INTERVAL";
else if(p*q==0 && p==0)
cout<<"\n\nSOLUTION IS: "<<a<<std::setprecision(12);
else if(p*q==0 && q==0)
cout<<"\n\nSOLUTION IS: "<<b<<std::setprecision(12);
else
{
while(diff>=0.0000000000001||diff<(-0.0000000000001))
{
p=fun(a);
q=fun(b);
c=((a*q)-(b*p))/(q-p);
diff=fun(c);
if((diff*p)<0)
{
cout<<"\n"<<i+1<<" iteration :"<<c<<std::setprecision(12);
b=c;
}
else
{
cout<<"\n"<<i+1<<" iteration :"<<c<<std::setprecision(12);
a=c;
}
i++;
}
cout<<"\n\nSOLUTION OF THE EQUATION IS :"<<c<<std::setprecision(12);
}
getch();
}
