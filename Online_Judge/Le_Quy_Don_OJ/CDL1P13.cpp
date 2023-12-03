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
	int n, k; cin >> n >> k;
	int male = k / n, female = k % n;
	cout << "Moi hoc sinh duoc chia " << male << " qua man." << '\n';
	cout << "So man danh rieng cho cac em nu la " << female << ".";
	return 0;
}