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
    int x1, x2, y1, y2, q;
    cin>>x1>>x2>>y1>>y2>>q;
    while (q--) {
        int xa, ya, tmp, xb, yb;
        cin>>xa>>ya>>tmp>>xb>>yb>>tmp;
        int x=xb-xa, y=yb-ya;
        x*=2, y*=2;
        xa+=x, ya+=y;
        if (xa<=x2 && xa>=x1 && ya<=y2 && ya>=y1) {
            cout<<"YES";
        }
        else {
            cout<<"NO";
        }
        cout<<'\n';
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