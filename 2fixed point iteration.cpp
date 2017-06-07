#include<iostream.h>
#include<conio.h>
#include<math.h>
//using namespace std;
long double func(long double x)
{
	  long double res;
	  res=((x*x*x)-(2*x)-5);
	  return (res);
}
long double func1(long double x)
{
	  long double x1;
	  x1=sqrt((5/x)+2);
	  return (x1);
}
int main()
{
	  long double x=2.00000000,x2,y2;
	  cout<<"X0 = "<<x<<"\t f(x) = "<<func(x);
	  int count=1;
	  while(count!=0)
	  {
			 x2=func1(x);
			 y2=func(x2);
			 if(y2<0.000000001&&y2>-0.000000001)
			 {
					cout<<"\nThe result is x"<<count++<<" = "<<x2<<"\t f(x) = "<<y2;
					break;
			 }
			 else
			 {
					cout<<"\n x"<<count++<<" = "<<x2<<"\t f(x) = "<<y2;
					x=x2;
			 }
	  }
	  getch();
	  return(0);
}
