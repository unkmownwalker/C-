#include<bits/stdc++.h>  
using namespace std;
long long int a[21][21];
bool chi(int x,int y,int p,int q)
{
   return ((abs(x-p)==2&&abs(y-q)==1)||(abs(x-p)==1&&abs(y-q)==2)||(x==p&&y==q));
}
int main()
{
    int n,m,p,q;
    cin>>n>>m>>p>>q;
    a[n][m]=0;
    for(int i=n;i>=0;i--)
    {
        for(int j=m;j>=0;j--)
        {
            if(chi(i,j,p,q)) a[i][j]=0;
            else
            {
            if((i==n&&j==m-1)||(i==n-1&&j==m)) a[i][j]=1;
            if(i==n&&j<m-1)  a[i][j]= a[i][j+1];
            if(i<n-1&&j==m)  a[i][j]= a[i+1][j];
            if(i<n&&j<m&&!chi(i+1,j,p,q)&&!chi(i,j+1,p,q)) a[i][j]=a[i+1][j]+a[i][j+1];
            if(i<n&&j<m&&chi(i+1,j,p,q)&&!chi(i,j+1,p,q))  a[i][j]=a[i][j+1];
            if(i<n&&j<m&&!chi(i+1,j,p,q)&&chi(i,j+1,p,q))  a[i][j]=a[i+1][j];
            }
        }
    }
    cout<<a[0][0];
    return 0;
}