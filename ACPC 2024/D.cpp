#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define input(arr) for(auto& index : arr){cin>>index;}
#define output(arr) for(auto& index : arr){cout<<index<<' ';}
#define show(x) cout<<#x<<" = "<<x<<endl;
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
using namespace std;
using ll = long long;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using vll = vector<ll>;
using vvll = vector<vll>;
using pi = pair<int, int>;
template <typename T>
using pqpair = priority_queue<T, vector<T>, greater<T>>;

void solve() {
    int n, m, q;
    cin>>n>>m>>q;
    map<int, vi> mp;
    mp[0]=vector<int>(n+1);
    for (int i=1; i<=n; i++) {
        mp[0][i]=i;
    }
    for (int i=0; i<m; i++) {
        int time;
        cin>>time;
        mp[time]=vector<int>(n+1);
        for (int j=1; j<=n; j++) {
            int tmp;
            cin>>tmp;
            mp[time][tmp]=j;
        }
    }
    for (int i=1; i<=q; i++) {
        int x, y, time;
        cin>>x>>y>>time;
        auto it=mp.upper_bound(time);
        if (it!=mp.begin()) it--;
        int time1=it->first;
        if (mp[time1][x]<mp[time1][y]) {
            cout<<x<<'\n';
        }
        else {
            cout<<y<<'\n';
        }
    }
}

int main() {
    IOS

    int t=1;
    // cin>>t;
    while (t--) {
        solve();
        cout<<(t?"\n":"");
    }
}