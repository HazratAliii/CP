#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define ii pair<int, int>

int main(){
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int row, col;
    cin >> row >> col;
    char grid[12][12];
    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            cin >>grid[i][j];
        }
    }
    int cnt = 0;
    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            if(grid[i][j] == 'W'){
                if(grid[i-1][j] == 'P' || grid[i+1][j] == 'P' || grid[i][j-1] == 'P' || grid[i][j+1] == 'P'){
                    cnt++;
                }
            }
        }
    }
    cout << cnt << "\n";
    return 0;
}
