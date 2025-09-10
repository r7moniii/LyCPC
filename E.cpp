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
    int a, b;
    cin>>a>>b;
    if (a<b) {
        cout<<"p1";
    }
    else if (a>b) {
        cout<<"p2";
    }
    else {
        cout<<"d";
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