#include<bits/stdc++.h>  //递归太慢，用二维数组
using namespace std;
int a[100][100];  //注意double有误差
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0) a[i][j]=1;
            else if (j>=1) a[i][j]=a[i-1][j+1]+a[i][j-1];
            else a[i][j]=a[i-1][j+1];    
        }
    }
    cout<<a[n][0];
    return 0;
 
}