/**
 *    Author:  Akira
 *    Created: 13.06.2023 14:49:27
**/
#include "bits/stdc++.h"
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define pb push_back
#define fi first
#define se second
#define gcd(x, y) __gcd(x, y)
#define lcm(x, y) x / __gcd(x, y) * y
typedef long long ll;
typedef long double ldb;
using namespace std;

const ldb PI = 3.14159265358979323846264338327950288419716939937510582097494459230;
const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ll MOD2 = 1e9 + 9;
const ldb EPS = 1e-6;
ll dp[20][180][2];
void getdigits(ll x, vector<int> &digit) {
	while(x) {
		digit.pb(x % 10);
		x /= 10;
	}
}
ll digitsum(int idx, int sum, int tight, vector<int> &digit) {
	if(idx == -1) return sum;
	if(dp[idx][sum][tight] != -1 and tight != -1) return dp[idx][sum][tight];
	ll res = 0;
	int k = (tight) ? digit[idx] : 9;
	for(int i = 0; i <= k; i++) {
		int newtight = (digit[idx] == i) ? tight : 0;
		res += digitsum(idx - 1, sum + i, newtight, digit);
	}
	if(!tight) dp[idx][sum][tight] = res;
	return res;
}
int rangedigitsum(int a, int b) {
	memset(dp, -1, sizeof(dp));

	vector<int> digitA;
	getdigits(a - 1, digitA);
	ll ans1 = digitsum(digitA.size() - 1, 0, 1, digitA);

   vector<int> digitB;
	getdigits(b, digitB);
	ll ans2 = digitsum(digitB.size() - 1, 0, 1, digitB);

	return (ans2 - ans1);
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	ll a, b;
	while(cin >> a >> b) {
        if(a == -1 && b == -1) return 0;
        cout << rangedigitsum(a, b) << endl;
	}
	return 0;
}
