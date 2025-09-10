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

void solve(vll& values) {
    ll p;
    cin>>p;
    cout<<values[upper_bound(values.begin(), values.end(), p)-values.begin()]-p;
}


int main() {
    IOS

    vll values;
    for (ll i=1; i<100000; i++) {
        values.pb(i*(i+1)/2);
    }
    sort(all(values));

    int t=1;
    cin>>t;
    while (t--) {
        solve(values);
        cout<<(t?"\n":"");
    }
}