#include<bits/stdc++.h>
using namespace std;

#define ll long long

vector <int> graph[1001];
int vis[1001], dist[1001];

void dfs(int source, int d){

    vis[source] = 1;
    dist[source] = d;

    for(int x: graph[source]){
        if(!vis[x])
            dfs(x, dist[source]+1);
    }
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int n;
    cin >> n;
    for(int i=1; i<n; i++){
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    dfs(1, 0);
    int q, ans = -1;
    cin >> q;
    while(q--){
        int city;
        cin >> city;
        int dis =INT_MAX;
        if(dis > dist[city])
            dis = dist[city], ans = city;
        else{
            if(dist[city] ==  dis && ans > city){
                ans = city;
            }
        }
    }
    cout << ans << "\n";
    return 0;
}
