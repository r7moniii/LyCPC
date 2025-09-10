#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define input(arr) for(auto& index : arr){cin>>index;}
#define output(arr) for(auto& index : arr){cout<<index<<' ';}
#define show(x) cout<<#x<<" = "<<x<<'\n';
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
    int n, m, k;
    cin>>n>>m>>k;
    vi d(n), s(m);
    input(d);
    input(s);
    pqpair<pi> pq;
    for (int i=0; i<n && i<k; i++) {
        pq.emplace(d[i]+s[0], i);
    }
    vi vec(n, 0);
    while (k--) {
        auto [sum, idx]=pq.top();
        pq.pop();
        cout<<idx+1<<' '<<vec[idx]+1<<'\n';
        if (vec[idx]+1<m) {
            vec[idx]++;
            pq.emplace(d[idx]+s[vec[idx]], idx);
        }
    }
}

int main() {
    IOS

    int t=1;
    cin>>t;
    while (t--) {
        solve();
        cout<<(t?"\n":"");
    }
}