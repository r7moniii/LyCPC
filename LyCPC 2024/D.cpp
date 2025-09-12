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
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    ll cnt=1, ans=0;
    for (int i=0; i<n-1; i++) {
        if (arr[i+1]>arr[i]) {
            cnt++;
        }
        else {
            ans+=(cnt*(cnt+1)/2);
            cnt=1;
        }
    }
    ans+=(cnt*(cnt+1)/2);
    cout<<ans;
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