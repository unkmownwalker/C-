#include<bits/stdc++.h>
using namespace std;
int n;
vector <int> path;
vector <bool> vis;
void dfs()
    {
        if(path.size()==n) 
        {
            for(int i=0;i<n;i++)
                cout<<setw(5)<<path[i];
            cout<<endl;
            return;
        }
        for(int j=1;j<=n;j++)
        {
            if(vis[j]==false)
            {
                vis[j]=true;
                path.push_back(j);
                dfs();
                path.pop_back();
                vis[j]=false;
            }
        }

    }
int main()
{
    cin>>n;
    vis.resize(n+1,false);
    dfs();
    return 0;
}