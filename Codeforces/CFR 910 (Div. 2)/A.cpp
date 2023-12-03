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

const ldb PI = 3.1415926535897932384626433832795028841971693993751058209749445923, EPS = 1e-6;
const ll INF = 1e18, MOD = 1e9 + 7, MOD2 = 1e9 + 9;
int n, k;                 
void decipher() {
	cin >> n >> k;
	string s; cin >> s;
	int cnta = 0, cntb = 0;
	for (int i = 0; i < sz(s); i++) {
		if (s[i] == 'A') ++cnta;
		else ++cntb;
	}
	if (cntb == k) {
		cout << 0 << '\n';
		return;
	}
	if (cntb < k) {
		cout << 1 << '\n';
		cout << k - sz(b) << " " << 'B' << '\n';
	}
	if (cntb > k) {
		cout << 1 << '\n';
		cout << cntb - k << 'A' << '\n';
	}
	cout << cnta << " " << cntb << '\n';
}

int main() {
	fastIO
	freopen("D:\\Code\\C++\\Akira CP\\HSG Tran Phu\\input.inp", "r", stdin);
	freopen("D:\\Code\\C++\\Akira CP\\HSG Tran Phu\\output.out", "w", stdout);
	int tt = 1; cin >> tt;
	while(tt--) decipher();
	cerr << "Times: " << TIME << "s." << '\n';
	return 0;
}