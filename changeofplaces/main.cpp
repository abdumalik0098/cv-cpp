#include <iostream>

using namespace std;
const int mxn=100;
const int mxm=100;

void places(int a[mxn][mxn],int n,int m)
{
    int t;
    int k=m-1;
    for(int i=0;i<n;i++)
    {
        t=a[i][0];
        a[i][0]=a[i][k];
        a[i][k]=t;
    }

}
void Print(int a[mxn][mxn],int n,int m)
{   cout<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {

            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int n,m,a[mxn][mxm];
    cin>>n>>m;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            a[i][j]=i*m+j+1;
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    places(a,n,m);
    Print(a,n,m);
    return 0;
}
