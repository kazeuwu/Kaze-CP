// author : akira
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) (int)x.size()
#define akira ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int n, a[11];
bool ok[11];

void Try(int k) {
	for(int i = 1; i <= n; i++) {
		if(!ok[i]) {
			a[k] = i;
			ok[i] = true;
			if(k == n) {
				for(int i = 1; i <= n; i++) {
					cout << a[i];
				}
				cout << '\n';
			}
			else Try(k + 1);
			ok[i] = false;
		}
	}
}
int main() {
	akira
	cin >> n;
	Try(1);
	return 0;
}