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
                         
// Tóm tắt : Tìm cách chia mảng ra 2 phần sao cho tổng 2 phần bằng nhau
/**
	n có thể lên đến 1000
	if tổng tất cà phần tử trong mảng là số lẻ => ko có đáp án
	else prefix sum
		tạo biến mid
		tạo biến tổng từ đầu đến mid
		tạo biến tổng từ mid đến n
		nếu bên trái lớn hơn phải thì ta phải dịch m xuống 1 đơn vị
		ngược lại cộng m lên 1 đơn vị
	nếu tổng trái == tổng phải thì trả ra luôn
**/

void solve() {
	int n, sum = 0; cin >> n;
	int a[n + 1], pref[n + 1] = {0};
	for (int i = 1; i <= n; i++) cin >> a[i], sum += a[i];
	if (sum & 1) {
		cout << 0;
		return;
	}
	for (int i = 1; i <= n; i++) pref[i] = pref[i - 1] + a[i];
	int m = n + 1 >> 1;
	for (int i = 1; i <= n; i++) {
		int sl = pref[m] - pref[0];
		int sr = pref[n] - pref[m];
		if (sl > sr) --m;
		else if (sl < sr) ++m;

		if (sr == sl) {
			cout << m;
			return;
		}
	}
	cout << 0;
}

int main() {
	fastIO
	freopen("D:\\Code\\C++\\Akira CP\\HSG Tran Phu\\input.inp", "r", stdin);
	freopen("D:\\Code\\C++\\Akira CP\\HSG Tran Phu\\output.out", "w", stdout);
	int t = 1; //cin >> t;
	while(t--) solve();
	cerr << "Times: " << TIME << "s." << endl;
	return 0;
}