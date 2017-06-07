#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
int n;
 double a[50][50],l[50][50],u[50][50],y[50],z[50],b[50];
cout<<" entr order"<<endl;
cin>>n;
cout<<" entr the coefficients of x1,x2,.....in matrix form"<<endl;
int i,j,k;
for(i=1;i<=n;i=i+1)
{ for(j=1;j<=n;j=j+1)
{ cin>>a[i][j];
}
}
cout<<" entr values of equation"<<endl;
for(i=1;i<=n;i=i+1)
{ cin>>b[i];
}
double s=0,t=0;
l[1][1]=sqrt(a[1][1]);
for(j=2;j<=n;j=j+1)
{ l[j][1]=a[j][1]/l[1][1];
}
for(j=2;j<=n;j=j+1)
{ s=0;
for(k=1;k<=j-1;k=k+1)
{ s=s+l[j][k]*l[j][k];
}
t=a[j][j]-s;
l[j][j]=sqrt(t);
}
int p;
for(j=2;j<=n;j=j+1)
{ for(p=j+1;p<=n;p=p+1)
{ s=0;
for(k=1;k<=j-1;k=k+1)
{ s=s+l[j][k]*l[p][k];
}
l[p][j]=(a[p][j]-s)/l[j][j];
}
}
for(i=1;i<=n;i=i+1)
{
 for(j=1;j<=n;j=j+1)
 {
  if(j>i){ l[i][j]=0;}
  }
  }
for(i=1;i<=n;i=i+1)
{ for(j=1;j<=n;j=j+1)
{
 u[i][j]=l[j][i];
}
}
cout<<"lower trianglle"<<endl;
for(i=1;i<=n;i=i+1)
{ for(j=1;j<=n;j=j+1)
{ cout<<l[i][j]<<" ";
}
cout<<endl;
cout<<endl;
}
cout<<" upper triangle"<<endl;
for(i=1;i<=n;i=i+1)
{ for(j=1;j<=n;j=j+1)
{cout<<u[i][j]<<" ";
}
cout<<endl;
}
y[1]=b[1]/l[1][1];
for(i=2;i<=n;i=i+1)
{ s=0;
for(j=1;j<=(i-1);j=j+1)
{ s=s+y[j]*l[i][j];
}
y[i]=(b[i]-s)/l[i][i];
}
z[n]=y[n]/u[n][n];
for(i=n-1;i>=1;i=i-1)
{ s=0;
for(j=i+1;j<=n;j=j+1)
{ s=s+z[j]*u[i][j];
}
z[i]=(y[i]-s)/u[i][i];
}
for(i=1;i<=n;i=i+1)
{ cout<<z[i]<<endl;
}
getche();
}

