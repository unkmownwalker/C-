#include<bits/stdc++.h>
using namespace std;
const int N=500001;
vector <int> g[N];
vector <int> res;
vector <bool> vis(N,false);
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
    queue<int> q;
    q.push(1);
    vis[1]=true;
    while(!q.empty())
    {
        int u=q.front();
        res.push_back(u);
        q.pop();
        sort(g[u].begin(),g[u].end());
        for(int v :g[u])
        {
            if(vis[v]==false)
            {
                vis[v]=true;
                q.push(v);
            }
        }
    }
    for(int j=0;j<n;j++)
    cout<<res[j]<<' ';
    return 0;
}