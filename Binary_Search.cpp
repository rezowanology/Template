#include <bits/stdc++.h>
using namespace std;
#define loop(i, n) for (int i = 0; i < int(n); i++)
#define  ll long long
const int INF = 1e9;

void solve(){
    int n;
    cin >> n;
    
    vector<int>v(n);
    for(auto &x: v) cin >> x;

    int k;
    cin >> k;

    int l = 0, r = n -1;

    bool flag = false;
    while(l<=r) {
        int mid = l + (r-l) / 2;

        if(v[mid] == k) {
            flag = true;
            break;
        } else if(v[mid] > k) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }

    }

    if(flag) cout << "YES\n";
    else cout << "NO\n";
}


int main() {
    solve();
}