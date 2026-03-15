#include<bits/stdc++.h>
using namespace std;
const int N=500001;
vector <int> g[N];
vector <int> res;
void dfs(int u,int par)
{
    res.push_back(u);
    sort(g[u].begin(),g[u].end());
    for(int v :g[u])
    {
        if(v!=par)
        dfs(v,u);
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<n;i++)
    { 
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1,-1);
    for(int j=0;j<n;j++)
      cout<<res[j]<<' ';
    return 0;
}