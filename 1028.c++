#include<bits/stdc++.h>  
using namespace std; //复杂度n^2,用前缀和可以优化到n
int main()
{
    int n;
    cin>>n;
    vector<long long int> a(n+1);
    a[0]=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=i/2;j++)
          a[i]+=a[j];
        a[i]+=1;
    }
    cout<<a[n];
    return 0;
}