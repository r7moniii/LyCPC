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
    int n, m;
    cin>>n>>m;
    string s[n];
    int cnt=0;

    for (int i=0; i<n; i++) {
        cin>>s[i];
    }
    for (int j=0; j<m; j++) {
        bool flag=true;
        for (int i=0; i<n; i++) {
            if (s[i][j]=='0') {
                flag=false;
                break;
            }
        }
        if (flag) {
            cnt++;
        }
    }
    cout<<cnt;
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