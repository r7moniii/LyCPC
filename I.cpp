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
    int q;
    cin>>q;
    priority_queue<ll> targ;
    priority_queue<ll, vector<ll>, greater<ll>> neut;
    ll sum=0;
    while (q--) {
        int type;
        cin>>type;
        if (type==1) {
            ll p;
            cin>>p;
            targ.push(p);
            if (!neut.empty()) {
                if (targ.top()>neut.top()) {
                    ll tmp1=targ.top(), tmp2=neut.top();
                    targ.pop(); neut.pop();
                    targ.push(tmp2);
                    neut.push(tmp1);
                    sum+=tmp1-tmp2;
                }
            }
        }
        else {
            sum+=targ.top();
            neut.push(targ.top());
            targ.pop();
            cout<<sum<<'\n';
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