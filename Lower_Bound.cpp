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

    sort(begin(v), end(v));

    int k;
    cin >> k;

    int l = 0, r = n -1, ans  = -1;

    while(l<=r) {
        int mid = l + (r-l) / 2;

        if(v[mid] >= k) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }

    }

    if(ans == -1) cout << "NO\n";
    else {
        cout << v[ans] << "\n";
    }
}


int main() {
    solve();
}