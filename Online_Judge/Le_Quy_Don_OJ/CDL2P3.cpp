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
	bool ok = true;
	for(int i = 0; i < 3; i++) {
		int tmp; cin >> tmp;
		if(tmp < 0) ok = false;
	}
	if(!ok) {
		cout << "It nhat mot so am";
	}
	else cout << "Ca ba so deu duong";
	return 0;
}