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
#define maxn 100005
int n;
                     
void decipher() {
    cin >> n;
    vector<string> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(all(a), [] (string &x, string &y) {const string thuan = x + y, nghich = y + x; return thuan > nghich;});
	string ans;
	for (int i = 0; i < n; i++) ans += a[i];
	while (sz(ans) > 1 && ans[0] == '0') ans.erase(0, 1);
	cout << ans;
}

int main() {
	fastIO
	freopen("D:\\Code\\C++\\Akira CP\\HSG Tran Phu\\input.inp", "r", stdin);
	freopen("D:\\Code\\C++\\Akira CP\\HSG Tran Phu\\output.out", "w", stdout);
	int tt = 1; //cin >> tt;
	while(tt--) decipher();
	cerr << "Times: " << TIME << "s." << '\n';
	return 0;
}