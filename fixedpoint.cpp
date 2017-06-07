/*Program to find the real root of xlog(x)-1.2=0 by fixed point iteration*/

#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

class fixed_point
{
  public:
  
  
  double iteration_func(double x)
  {
	double value=(1.2/(log10(x)));
	return(value);
  }

  double calculate(double x0)
  {
	double x;
	double err=fabs(x0+1);
	int i;

	do
	{

	  x=iteration_func(x0);
	  
	  err=fabs(x-x0);
	  
	  x0=x;
	}while(err>0.00001);
	 //cout<<"The number of iterations are.."<<(i-1)<<"\n\n";
  	return(x);
  }

};

int main()
{
	fixed_point ob1;
	cout<<"Enter the initial guess of the root...\n";
	double x0;
	
	cin>>x0;
	double root=ob1.calculate(x0);

	cout<<"The root is = "<<root<<"\n";
    getch();
	return 0;
}

