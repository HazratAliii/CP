#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define ii pair<int, int>

int main(){
	ios_base::sync_with_stdio(false);cin.tie(nullptr);

	ll n, m;
	cin >> n >> m;
	vi arr(m);
	
	for(int &a: arr)
		cin >> a;

	ll cnt = arr[0]  - 1;

	for(int i=0; i<m-1; i++){
		if(arr[i] < arr[i+1])
			cnt += (arr[i+1] - arr[i]);
		else if(arr[i] > arr[i+1]){
			cnt += (n - (arr[i] - arr[i+1]));
		}
	}

	cout << cnt << "\n";

	return 0;
}