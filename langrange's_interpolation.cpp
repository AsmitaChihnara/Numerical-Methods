#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int n;
float a,x[10],f[10];

cout<<"Enter the no. of points:";
cin>>n;
for(int k=0;k<n;k++)
{
cout<<"\nEnter point no. "<<k+1<<" x = ";
cin>>x[k];
cout<<"f(x) = ";
cin>>f[k];
}
cout<<"\nEnter the point where appx. value has to be found : ";
cin>>a;
float sum=0;
for(int i=0;i<n;i++)
{
float p=1;
for(int j=0;j<n;j++)
{
if(j!=i)
{
float d=((a-x[j])/(x[i]-x[j]));
p=p*d;
}
}
float p1=p*f[i];
sum=sum+p1;
}
cout<<"Value at given point "<<sum;
getch();
return 0;
}
