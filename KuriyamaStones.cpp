#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define ii pair<int, int>

int main(){
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int n;
    cin >> n;
    vector <ll> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    vector <ll> brr(n);
    brr = arr;
    sort(brr.begin(), brr.end());

    for(int i=1; i<n; i++){
        arr[i] += arr[i-1];
    }

    for(int i=1; i<n; i++){
        brr[i] += brr[i-1];
    }

    int q;
    cin >> q;
    while(q--){
        int a, b, c;
        cin >> a >> b >> c;
        if(a == 1){
            if(b == 1){
                cout << arr[c-1] << "\n";
            }else{
                cout << arr[c-1] - arr[b-2] << endl;
            }

        } else {

            if(b == 1){
                cout << brr[c-1] << "\n";
            }else{
                cout << brr[c-1] - brr[b-2] << endl;
            }
        }
    }

    return 0;
}
