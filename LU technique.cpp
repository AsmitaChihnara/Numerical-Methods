
#include<iostream>
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,k,j,p;
    float a[10][10],l[10][10]={0},u[10][10]={0},sum,b[10],z[10]={0},x[10]={0};
    std::cout<<"Enter the order of matrix ! ";
    std::cin>>n;
    std::cout<<"Enter all coefficients of matrix : ";
    for(i=1;i<=n;i++)
    {
        std::cout<<"\nRow "<<i<<"  ";
        for(j=1;j<=n;j++)
            std::cin>>a[i][j];
    }
    std::cout<<"Enter elements of b matrix/n";
    for(i=1;i<=n;i++)
        std::cin>>b[i];
    //********** LU decomposition *****//
    for(k=1;k<=n;k++)
    {
        u[k][k]=1;
        for(i=k;i<=n;i++)
        {
            sum=0;
            for(p=1;p<=k-1;p++)
                sum+=l[i][p]*u[p][k];
            l[i][k]=a[i][k]-sum;
        }

        for(j=k+1;j<=n;j++)
        {
            sum=0;
            for(p=1;p<=k-1;p++)
                sum+=l[k][p]*u[p][j];
            u[k][j]=(a[k][j]-sum)/l[k][k];
        }
    }
    //******** Displaying LU matrix**********//
    std::cout<<"L matrix is /n";
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            std::cout<<l[i][j];
       std::cout<<"/n";
    }
    std::cout<<"u matrix is /n";
   // std::cout<<;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            std::cout<<u[i][j];
      //  std::cout<<"/n";
    }

    //***** FINDING Z; LZ=b*********//

    for(i=1;i<=n;i++)
    {                                        //forward subtitution method
        sum=0;
        for(p=1;p<i;p++)
        sum+=l[i][p]*z[p];
        z[i]=(b[i]-sum)/l[i][i];
    }
    //********** FINDING X; UX=Z***********//

    for(i=n;i>0;i--)
    {
        sum=0;
        for(p=n;p>i;p--)
            sum+=u[i][p]*x[p];
        x[i]=(z[i]-sum)/u[i][i];
    }
    //*********** DISPLAYING SOLUTION**************//
    std::cout<<"Set of solution is/n";
    for(i=1;i<=n;i++)
        std::cout<<x[i];

    getch();
    return 0;
}









2nd try:
#include<iostream>
#include<cstdio>
 
using namespace std;
 
int main(int argc, char **argv)
{
    void lu(float[][10], float[][10], float[][10], int n);
    void output(float[][10], int);
    float a[10][10], l[10][10], u[10][10];
    int n = 0, i = 0, j = 0;
    cout << "Enter size of 2d array(Square matrix) : ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << "Enter values no:" << i << ", " << j << ": ";
            cin >> a[i][j];
        }
    }
    lu(a, l, u, n);
    cout << "\nL Decomposition\n\n";
    output(l, n);
    cout << "\nU Decomposition\n\n";
    output(u, n);
    return 0;
}
void lu(float a[][10], float l[][10], float u[][10], int n)
{
    int i = 0, j = 0, k = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (j < i)
                l[j][i] = 0;
            else
            {
                l[j][i] = a[j][i];
                for (k = 0; k < i; k++)
                {
                    l[j][i] = l[j][i] - l[j][k] * u[k][i];
                }
            }
        }
        for (j = 0; j < n; j++)
        {
            if (j < i)
                u[i][j] = 0;
            else if (j == i)
                u[i][j] = 1;
            else
            {
                u[i][j] = a[i][j] / l[i][i];
                for (k = 0; k < i; k++)
                {
                    u[i][j] = u[i][j] - ((l[i][k] * u[k][j]) / l[i][i]);
                }
            }
        }
    }
}
void output(float x[][10], int n)
{
    int i = 0, j = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%f ", x[i][j]);
        }
        cout << "\n";
    }
}