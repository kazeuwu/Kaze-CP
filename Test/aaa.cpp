// author : Tran Gia Huy
#include "bits/stdc++.h"
using namespace std;
 
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define pb push_back
#define pf push_front
#define eb emplace_back
#define fi first
#define se second
#define p64 pair<long long, long long>
#define p32 pair<int, int>
#define ll long long
#define ull unsigned long long
#define ldb long double
#define TIME  (1.0 * clock() / CLOCKS_PER_SEC)
#define maxn 1000005

const ldb PI = 3.1415926535897932384626433832795028841971693993751058209749445923, EPS = 1e-6;;
const ll INF = 1e18, MOD = 1e9 + 7, MOD2 = 1e9 + 9;

/**
sample
9 5
1 0 1 2 1 1 0 2 1
**/
void OnePunchAC() {
    int n, k; cin >> n >> k;
    int a[n + 1], pref[n + 1];
    for (int i = 1; i <= n; i++) {
    	cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; i++) {
    	pref[i] = pref[i - 1] + a[i];
    }
    int l = 1, r = n, cnt = 0;
    while (l < r) {
    	if (pref[r] - pref[l - 1] == k) return void (cout << cnt);
    	if (pref[r - 1] - pref[l - 1] > k) --r;
    	else ++l;
    }
    cout << cnt;
}
 
int main() {
	fastIO
	freopen("D:\\Code\\C++\\Akira CP\\HSG Tran Phu\\input.inp", "r", stdin);
	freopen("D:\\Code\\C++\\Akira CP\\HSG Tran Phu\\output.out", "w", stdout);
	int tt = 1; //cin >> tt;
	while(tt--) OnePunchAC();
	cerr << '\n' << "Times: " << TIME << "s." << '\n';
	return 0;
}