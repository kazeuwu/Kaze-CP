// author : akira
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) (int)x.size()
#define akira ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
	akira
	int n; cin >> n;
	if(n & 1 == 0) --n;
	cout << n / 3;
	return 0;
}