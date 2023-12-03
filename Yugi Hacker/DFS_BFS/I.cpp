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
#define maxn 100005

const ldb PI = 3.1415926535897932384626433832795028841971693993751058209749445923, EPS = 1e-6;;
const ll INF = 1e18, MOD = 1e9 + 7, MOD2 = 1e9 + 9;

int n, m, vis[maxn];
priority_queue<int> pq;
vector<int> a[maxn];
void OnePunchAC() {
	cin >> n >> m;
	for (int i = 1; i <= m; i++) {
		int x, y; cin >> x >> y;
		a[x].eb(y);
		a[y].eb(x);
	}
	pq.push(-1);
    vis[1] = 1;
    while(!pq.empty()) {
    	int u = -pq.top(); pq.pop();
    	cout << u << " ";
    	for (auto v : a[u]) {
    		if(!vis[v]) {
    			pq.push(-v);
    			vis[v] = 1;
    		}
    	}
    }
}
 
int main() {
	fastIO
	int tt = 1; //cin >> tt;
	while(tt--) OnePunchAC();
	cerr << '\n' << "Times: " << TIME << "s." << '\n';
	return 0;
}