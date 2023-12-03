// author : akira
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) (int)x.size()
#define akira ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
	akira
	int t; cin >> t;
	cin.ignore();
	while(t--) {
		string s; getline(cin, s);
		stringstream ss(s);                         	
		string word;
		int cnt = 0;
		while(ss >> word) {
			 ++cnt;
		}
		cout << cnt << '\n';
	}
	return 0;
}