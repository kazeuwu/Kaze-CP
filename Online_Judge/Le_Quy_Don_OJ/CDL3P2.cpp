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
	int n; cin >> n;
	if(n & 1 == 0) --n;
	int idx = n / 3;
	ll sum = 0;
	for(int i = 0, mul = 1; i < idx; i++) {
		sum += 3 * mul;
		++mul;
	}
	cout << sum;
	return 0;
}