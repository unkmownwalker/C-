#include<bits/stdc++.h>  
using namespace std;
int main()
{
    int n,num=1;
    cin>>n;
    vector<long int> a(n+1),b(n+1);
    for(int i=0;i<n;i++)  cin>>a[i];
    sort(&a[0],&a[0]+n);
    b[0]=a[0];
    for(int i=1;i<n;i++)  
    {
        b[i]= a[i]==a[i-1]? 0:a[i];
        if(a[i]!=a[i-1]) num+=1;
    }
    cout<<num<<endl;
    for(int i=0;i<n;i++)
    {
        if(b[i]) cout<<b[i]<<' ';
    }
    return 0;
}