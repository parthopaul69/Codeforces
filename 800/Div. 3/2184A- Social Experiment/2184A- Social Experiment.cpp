#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

typedef long long           ll;
typedef unsigned long long  ull;
typedef long double         ld;
typedef pair<int,int>       pii;
typedef pair<ll,ll>         pll;
typedef vector<int>         vi;
typedef vector<ll>          vll;
typedef vector<pii>         vpii;
typedef vector<vector<int>> vvi;

#define FASTIO  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb      push_back
#define eb      emplace_back
#define mp      make_pair
#define fi      first
#define se      second
#define sz(x)   (int)(x).size()
#define nl      '\n'
#define yes     cout << "YES\n"
#define no      cout << "NO\n"
#define rep(i,a,b)  for(int i=(a); i<(b); i++)
#define per(i,a,b)  for(int i=(b)-1; i>=(a); i--)
#define each(x,v)   for(auto& x : v)

ll gcd (ll a, ll b)  { return b ? gcd(b, a%b) : a; }
ll lcm (ll a, ll b)  { return a / gcd(a, b) * b; }

ll power (ll b, ll e, ll m) {
    ll r = 1; b %= m;
    for (; e > 0; e >>= 1, b = b*b%m) if (e & 1) r = r*b%m;
    return r;
}

ll isqrt (ll n) {
    ll r = sqrtl(n);
    while (r * r > n) r--;
    while ((r+1) * (r+1) <= n) r++;
    return r;
}

bool isPrime (ll n) {
    if (n < 2) return false;
    for (ll i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

template<typename T> bool chmin(T& a, T b) { return a > b ? a = b, 1 : 0; }
template<typename T> bool chmax(T& a, T b) { return a < b ? a = b, 1 : 0; }

void solve () {
    int n;
    cin >> n;
    if (n <= 3) {
        cout << n << nl;
    }
    else if (n > 3 && n % 2 != 0) {
        cout << n % 2 << nl;
    }
    else {
        cout << n % 2 << nl;
    }
}

int main() {
    FASTIO
    int t; cin >> t;
    while (t--) solve();
}