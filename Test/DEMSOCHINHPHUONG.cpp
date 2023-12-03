// author : akira
#include <bits/stdc++.h>
using namespace std;

#define akira ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl '\n'
#define pb push_back
#define pf push_front
#define cint(x) int(x - '0')
#define fi first
#define se second
#define llll pair<long long, long long>
#define pii pair<int, int>
#define ll long long
#define ull unsigned long long
#define ldb long double

int main() {
	akira
	string a, b; cin >> a >> b;
	ll l = 0;
	for(int i = sz(a) - 1, idx = 0; i >= 0; i--, idx++) {
		if(a[i] == '1') {
			l += pow(2, idx);
		}
	}
	ll r = 0;
	for(int i = sz(b) - 1, idx = 0; i >= 0; i--, idx++) {
		if(b[i] == '1') {
			r += pow(2, idx);
		}
	}
	ll cnt = 0;
	ll sql = sqrt(l), sqr = sqrt(r);
	if(sql * sql != l) ++sql;
	cout << sqr - sql + 1; 
	return 0;
}