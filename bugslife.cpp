#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define ii pair<int, int>

vi adj[2005];
int visited[2005];
int color[2005];

bool dfs(int s, int c){

    visited[s] = 1;
    color[s] = c;
    for(int x: adj[s]){
        if(!visited[x]){
            if(dfs(x, c^1) == false){
                return false;
            }
        }else{
            if(color[x] == color[s]){
                return false;
            }
        }
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int t;
    cin >> t;
    for(int i=0; i<t; i++){

        int n, m;
        cin >> n >> m;
        for(int k=0; k<n; k++){
            adj[k].clear();
            visited[k] = 0;
        }

        for(int j=0; j<m; j++){
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        bool flag = true;
        for(int t=0; t<n; t++){
            if(!visited[t]){
                if(!dfs(t, 1)){
                    flag = false;
                }
            }
        }
        cout << "Scenario #" << i+1 << ":\n";
        if(!flag){
            cout << "Suspicious bugs found!\n";
        }else{
            cout << "No suspicious bugs found!\n";
        }
    }

    return 0;
}
