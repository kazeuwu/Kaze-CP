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
#define maxn 1000005

const ldb PI = 3.1415926535897932384626433832795028841971693993751058209749445923, EPS = 1e-6;
const ll INF = 1e18, MOD = 1e9 + 7, MOD2 = 1e9 + 9;

// Might I solve this issue very expeditiously?
int n = 1001;
bool pr[1001];
void sieve() {
	memset(pr, true, sizeof pr);
	pr[0] = pr[1] = false;
	for (int i = 2; i * i <= 1000; i++) {
		if (pr[i]) {
			for (int j = 2 * i; j <= 1000; j += i) {
				pr[j] = false;
			}
		}
	}
}
void moon() {
	srand(time(NULL));
	int a[1001] = {0}, count[1001] = {0};
	for (int i = 0; i < n; i++) {
		int num = rand();
		a[i] = num;
		++count[a[i]];
	}
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	cout << "Tong la: " << sum << '\n';
	cout << "List la: ";
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	double tbc = (sum / 1000);
	cout << "Trung binh cong la: " << tbc << '\n';

	int premax = INT_MIN, posmax = -1;
	for (int i = 0; i < n; i++) {
		if (a[i] > premax) {
			premax = a[i];
			posmax = i;
		}
	}

	int premin = INT_MAX, posmin = -1;
	for (int i = 0; i < n; i++) {
		if (a[i] < premin) {
			premin = a[i];
			posmin = i;
		}
	}
	cout << "Max la " << premax << " nam o vi tri " << posmax << '\n';
	cout << "Min la " << premin << " nam o vi tri " << posmin << '\n';
	sieve();
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (pr[a[i]]) ++cnt;
	}
	cout << "So luong so nguyen to la: " << cnt << '\n';
	int p = -1, x = -1;
	for (int i = 0; i < 1001; i++) {
		if (count[i] > p) {
			p = count[i];
			x = i;
		}
	}
	cout << "So xuat hien nhieu nhat la: " << x << " va xuat hien " << p << " lan" << '\n';
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