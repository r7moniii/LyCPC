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

void solve() {
    int n;
    cin>>n;
    int arr[n];
    input(arr);
    ll gcdd=0;
    for (int i=0; i<n; i++) {
        gcdd=gcd(gcdd, arr[i]);
    }
    set<int> ans;
    for (int i=1; i*i<=gcdd; i++) {
        ans.insert(i);
        ans.insert(gcdd/i);
    }
    cout<<ans.size()<<'\n';
    for (auto it : ans) {
        cout<<it<<' ';
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