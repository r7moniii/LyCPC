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
    int n;
    cin>>n;
    vi sums(1<<n);
    for (int i=0; i<1<<n; i++) {
        cin>>sums[i];
    }
    sort(all(sums));
    map<ll, int> frq;
    for (auto it : sums) {
        frq[it]++;
    }
    map<ll, int> can;
    can[0]++;
    vi ans;

    for (int i=1; i<1<<n; i++) {
        ll curr=sums[i];
        if (frq[curr]>can[curr]) {
            auto copy=can;
            for (auto& [f,s] : copy) {
                can[f+curr]+=s;
            }
            ans.pb(curr);
        }
    }
    sort(all(ans));
    output(ans);
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