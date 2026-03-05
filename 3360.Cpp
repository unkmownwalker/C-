#include <bits/stdc++.h>
using namespace std;

struct a{
    int front;
};

const int N = 1e6 + 5;
a b[N];
int g[N];

int main(){
    int n, a, f;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a;
        if(a!=0){b[a].front = i;}
        else{
            f = i;
        }
    }
    
    for(int i = 1; i <= n; i++){
        g[i] =  f;
        f = b[f].front;
    }
    for(int i = n; i > 0; i--){
        cout << g[i] << ' ';
    }

    return 0;
}