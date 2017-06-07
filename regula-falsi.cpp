#include<iostream>
#include<conio.h>
using namespace std;

double func(double x)
{
       double f;
       f=((x*x)-(4*x)+3);
       return f;
}
int main()
{
    double a,b,x,y,z,;
    int c=0;
    cout<<"Enter the interval: ";
	cin>>a>>b;
	
	if((func(a)*func(b))>0)
	cout<<"The root doesnt lie in this interval.";
	else
	{
        x=a;y=b;
        while(((x-y)>0.001)||((y-x)>0.001))
        {
                                             c++;
                                             z=((x*func(y))-(y*func(x)))/(func(y)-func(x));
                                             cout<<"\nThe root after iteration "<<c<<" = "<<z;
                                             if((func(z)*func(y))<0)
                                             x=z;
                                             if((func(z)*func(x))<0)
                                             y=z;
                                             
                                             if(c==20)
                                             break;
                                             }
        cout<<"The approximate root is: "<<z;
     }
     getch();
     return 0;
 }
