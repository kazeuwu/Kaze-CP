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
	//cout << fixed << setprecision(2);
	double x, y; cin >> x >> y;
	double percent = x * 10.0 / 100.0;
	if(y < percent) {
		cout << "Arabica mat mua." << '\n';
		cout << "He so gia ban: 3";
	}
	else {
		cout << "Arabica duoc mua." << '\n';
		cout << "He so gia ban: 2";
	}
	return 0;
}