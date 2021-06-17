#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define ii pair<int, int>
#define nl "\n"

const ll r = 105;
const ll c = 100005;
ll weight[r];
ll cost[r];
ll dp[r][c];
bool visited[r][c];
ll n, w;
ll knapsack(ll pos, ll w) {
	if(pos == n) {
		return 0;
	}
	if(visited[pos][w]) {
		return dp[pos][w];
	}
	ll ans = 0;
	visited[pos][w] = true;
	if(w - weight[pos] >= 0) {
		ans = max (ans, knapsack(pos+1, w - weight[pos]) + cost[pos]);
	}
	ans = max (ans, knapsack(pos+1, w));
	dp[pos][w] = ans;
	return ans;
}
void solve(){
	cin >> n >> w;
	for(int i=0; i<n; i++){
		cin >> weight[i] >> cost[i];
	}
	cout << knapsack(0, w);
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(nullptr);

	int t = 1;
	// cin >> t;
	while(t--)
		solve();
 	
	return 0;
}