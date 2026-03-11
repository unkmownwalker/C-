#include<bits/stdc++.h>
using namespace std;
long int f[1000000],g[1000000];
int main()
{
    int n;
    cin>>n;
    f[1]=1;f[2]=2;g[1]=1;
    for(int i=3;i<=n;i++)
    {
        f[i]=(f[i-1]+f[i-2]+2*g[i-2])%10000;
        g[i-1]=(f[i-2]+g[i-2])%10000;
    }
    cout<<f[n]%10000;
    return 0;
}