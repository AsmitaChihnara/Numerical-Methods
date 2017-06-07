#include<iostream>
#include<conio.h>
using namespace std;

double func(double x, double y)
{
       double f=x+y;
       return f;
}

int main()
{
    int c=0,n;
    double x,y1,y2,y3,h;
    cout<<"Enter the values of x0 and y0 respectively: ";
    cin>>x>>y1;
    cout<<"Enter the no. of steps: ";
    cin>>n;
    cout<<"Enter the value of h: ";
    cin>>h;
    
    while(c<n)
    {
              c++;
              y2=y1+(h*func(x,y1));              
              y3=y1+((0.5*h)*(func(x,y1)+func(x+h,y2)));
              cout<<"\ny"<<c<<" = "<<y3;
              y1=y3;
              x=x+h;
    }
    
    cout<<"\nThe approximate value of y is: "<<y3;
    getch();
    return 0;
}
              
    
    
