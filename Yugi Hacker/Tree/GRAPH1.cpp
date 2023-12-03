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

/**
Đề bài : Có n vị trí, trong đó vị trí 1 là nguồn nước, còn n - 1 vị trí còn lại là nơi tiêu thụ. Mỗi
nơi tiêu thụ nước có 1 ống dẫn nước từ nơi tiêu thụ nước khác hoặc nguồn nước. Biết rằng có 1s để
nước chảy hết từ vị trí này qua vị trí khác bằng 1 ống dẫn nước. Hỏi sau khi nguồn nước bắt đầu chảy
thì bao lâu sau thì vị trí i nhận nước ?
Input : Nhập n, n - 1 dòng tiếp theo mỗi dòng nhập u, v biểu thị 1 cạnh của đồ thị.
Output : Gồm n - 1 dòng là khoảng cách từ đỉnh 1 tới các đỉnh khác (từ 2 đến n).

Sample Input :
4
1 3
2 1
3 4
Sample Output :
1 1 2
**/  

#define maxn 100005 
int n, dp[maxn];
vector<int> a[maxn];     
void dfs(int u, int p) { // p là cha của u
	for (int v : a[u]) {
		if(p != v) { // Duyệt tất cả đỉnh kề với u ngoại trừ nút cha của nó ra
			dp[v] = dp[u] + 1; // Đi từ v sang u (nghĩa là chi phí tới v sẽ là thg trc đó + thêm 1)
			dfs(v, u);
		}
	}
}
void decipher() {
    cin >> n;
    for (int i = 1; i < n; i++) {
    	int x, y; cin >> x >> y;
    	a[x].eb(y);
    	a[y].eb(x);
    }
    dfs(1, -1);
    for (int i = 2; i <= n; i++) cout << dp[i] << " ";
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