// author : Tran Gia Huy
#include "bits/stdc++.h"
using namespace std;

/** ----------MACROS---------- **/
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

const ldb PI = 3.1415926535897932384626433832795028841971693993751058209749445923;
const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ll MOD2 = 1e9 + 9;
const ldb EPS = 1e-6;
                         
/** ----------PROBLEM SOLVING---------- **/
string subnum(string a, string b) {
	int carry = 0, sum;
	string ans = a;
	for(int i = sz(a) - 1; i >= 0; i--) {
		sum = (a[i] - '0') - (b[i] - '0') - carry;
		if(sum < 0) {
			sum += 10;
			carry = 1;

		} else carry = 0;
		ans[i] = sum + '0';
	}
	return ans;
}
string tang(string x) {
	sort(all(x));
	return x;
}
string giam(string x) {
	sort(all(x));
	reverse(all(x));
	return x;
}
void solve() {
    string s; cin >> s;
    string tmp = s;
    int cnt = 1;
    sort(all(tmp)); reverse(all(tmp));
    sort(all(s));
    string ans = subnum(tmp, s);
    while(true) {
    	++cnt;
    	if(ans == "6174") break;
    	ans = subnum(giam(ans), tang(ans));
    	
    }
    cout << cnt;
}

/** ----------ALGORITHMS----------

    ------------------------------ **/

/** ----------MAIN FUNCTION---------- **/
int main() {
	fastIO
	freopen("input.inp", "r", stdin);
	freopen("output.out", "w", stdout);
	int t = 1; //cin >> t;
	while(t--) solve();
	return 0;
}