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
/**
	2 con trỏ
	input: 
	6
	3 5 -8 1 7 9
	3 2 4 6 9 -6
**/
int n;                        
void solve() {
    cin >> n;
    int a[n + 1], b[n + 1];
    for(int i = 1; i <= n; i++) cin >> a[i];
   	for(int i = 1; i <= n; i++) cin >> b[i];
   	sort(a + 1, a + n + 1);
   	sort(b + 1, b + n + 1);
   	int i = 1, j = n, sum = INT_MAX;
   	while(i <= n && j >= 1) {
   		sum = min(sum, abs(a[i] + b[j]));
   		if(sum == 0) break;
   		if(a[i] + b[j] < 0) {
   			++i;
   		}
   		else --j;
   	}
   	cout << sum;
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