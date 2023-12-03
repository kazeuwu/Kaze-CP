// author : akira
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) (int)x.size()
#define akira ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
	akira
	int n; cin >> n;
	if(n % 400 == 0 || (n % 4 == 0 && n % 100 != 0)) cout << "Yes";
	else cout << "No";
	return 0;
}