// author : Tran Gia Huy
#include "bits/stdc++.h"
using namespace std;

#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define p64 pair<long long, long long>
#define p32 pair<int, int>
#define ll long long
#define ull unsigned long long
#define ldb long double
#define TIME  (1.0 * clock() / CLOCKS_PER_SEC)

const ldb PI = 3.1415926535897932384626433832795028841971693993751058209749445923;
const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ll MOD2 = 1e9 + 9;
const ldb EPS = 1e-6;

#define int long long  

/**
	Tổng đoạn con là: a[i] + a[i + 1] + ... + a[n]
	=> tổng từ i đến j là a[j] - a[i - 1]
	Và điều kiện phải chia hết cho k
	Nghĩa là: a[j] đồng dư a[i - 1] (mod k)
	a[i] % k = a[j] % k (tổng 0 -> i % k = tổng 0 -> j % k)
	=> Cần đếm số cặp phần tử bằng nhau trong dãy
	Giả sử có x cặp phần tử bằng nhau => đáp án: x * (x - 1) / 2
**/
void solve() {
	int n, k; cin >> n >> k;
	int a[n], cur[n] = {0}, sum = 0, cnt = 0;
	for (int i = 0; i < n; i++) cin >> a[i];
	cur[0] = 1;
	for (int i = 0; i < n; i++) {
		sum += a[i];
		int tmp = (sum % k + k) % k;
		cur[tmp]++;
	}
	for (int i = 0; i < k; i++) {
		cnt += cur[i] * (cur[i] - 1) >> 1;
	}
	cout << cnt << '\n';
}

signed main() {
	fastIO
	freopen("D:\\Code\\C++\\Akira CP\\HSG Tran Phu\\input.inp", "r", stdin);
	freopen("D:\\Code\\C++\\Akira CP\\HSG Tran Phu\\output.out", "w", stdout);
	int t = 1; //cin >> t;
	while(t--) solve();
	cerr << "Times: " << TIME << "s." << endl;
}