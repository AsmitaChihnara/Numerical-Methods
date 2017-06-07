#include<iostream>
#include<conio.h>
using namespace std;

float x[20],f[20];


int fact(int a){
	if(a==0||a==1)
return 1;
else
return (a*fact(a-1));
}

float fun1(float y,int n)
{
float ax,a,h,del[n-1][n-1];int m=n,l=1,g=0;
ax=f[n-1];
a=x[n-1];h=x[1]-x[0];
float u=(y-a)/h;
cout<<"\nBACKWARD DIFFERENCE TABLE:\n";
for(int i=1;i<=n-1;i++){
	cout<<"Navla-"<<i<<"(x)\t";
	for(int k=m-1;k>0;k--){
		if(i==1){
		del[i][m-k]=f[l]-f[l-1];l++;
		}
		else{
			del[i][m-k]=del[i-1][m-k+1]-del[i-1][m-k];
		}
		cout<<del[i][m-k]<<"\t";
	}m--;cout<<"\n";
}
float ans=f[n-1],mult=u;
for(int i=0;i<n;i++){
ans+=(mult*del[1+i][n-1-i])/fact(i+1);
g++;
mult=mult*(u+g);
}

return ans;
}

int main()
{
cout<<"APPROXIMATION OF A FUNCTION BY NEWTON'S BACKWARD DIFFERENCE RULE ";
int n ;
cout<<"\nEnter the no. of points to be considered : ";
cin>>n;
for(int i=0;i<n;i++)
{
cout<<"\nEnter point no. "<<i+1<<" x = ";
cin>>x[i];
cout<<"f(x) = ";
cin>>f[i];
}
float y;
cout<<"\nEnter the point where appx. value has to be found : ";
cin>>y;

float ans=fun1(y,n);
cout<<"\nThe appx. value is : "<<ans;
getch();
return 0;
}
