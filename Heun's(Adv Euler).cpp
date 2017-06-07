#include<iostream>
using namespace std;
#include<conio.h>
#include<math.h>
float f(float, float);
int main()
{
    float y, x, h, n, y1;
    cout<<"Enter the width of iteration:"<<endl;
    cin>>h;
    cout<<"Enter the initial X:"<<endl;
    cin>>x;
    cout<<"Enter Y("<<x<<"):"<<endl;
    cin>>y;
    cout<<"Enter the final X:"<<endl;
    cin>>n;
    for(; x<n; x+=h)
    {
              y1=y+h*f(x,y);
              y+=h/2*(f(x,y)+f(x+h,y1));
    }
    cout<<"Y("<<x<<") :"<<y<<endl;
    getch();
}
float f(float x, float y)
{
      float y1=0;
      y1=(x+pow(y,3))/(y+pow(x,3));
      return y1;
}
