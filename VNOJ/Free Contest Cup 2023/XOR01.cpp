/* author : Tran Gia Huy */
#include <bits/stdc++.h>
using namespace std;
 
#define fast_paced ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define builtin_popcount __builtin_popcountll
#define fi first
#define se second
#define p64 pair<long long, long long>
#define p32 pair<int, int>
#define ll long long
#define ull unsigned long long
#define ldb long double
#define TIME  (1.0 * clock() / CLOCKS_PER_SEC)
#define maxn 100005

const ldb PI = 3.1415926535897932384626433832795028841971693993751058209749445923, EPS = 1e-6;
const ll INF = 1e18, MOD = 1e9 + 7, MOD2 = 1e9 + 9;

// Might I solve this issue very expeditiously?
int a[maxn], cnt[maxn];
void moon() {
	int n; cin >> n;
	ll ans = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		ans += cnt[1 ^ a[i]];
		ans += cnt[a[i]];
		++cnt[a[i]];
	}
	cout << ans << '\n';
}
 
int main() {
	fast_paced
	freopen("D:\\Code\\C++\\Akira CP\\HSG Tran Phu\\input.inp", "r", stdin);
	freopen("D:\\Code\\C++\\Akira CP\\HSG Tran Phu\\output.out", "w", stdout);
	int tt = 1; //cin >> tt;
	while(tt--) moon();
	cerr << '\n' << "Times: " << TIME << "s." << '\n';
	return 0;
}

/** -------------------- NOTES --------------------

    ----------------------------------------------- **/