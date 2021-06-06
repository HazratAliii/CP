#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define ll long long
#define vi vector<int>
#define ii pair<int, int>

void solve(){
	map <char, int> mp;
	string str;
	cin >> str;
	int k;
	cin >> k;
	int cnt = 0, maxx = INT_MIN, len = str.length();
	for(char i = 'a'; i<='z'; i++){
		
		int u;
		cin >> u;
		maxx = max (maxx, u);
		mp.insert({i, u});
	}
	for(int i=0; i<len; i++){
		cnt += (mp[str[i]] * (i+1));
	}	
	int val = len+1; 
	for(int i = 0; i<k; i++){
		cnt += (maxx * val);
		val++;
	}
	cout << cnt << nl;
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(nullptr);

	int t = 1;
	// cin >> t;
	while(t--)
		solve();
 	
	return 0;
}